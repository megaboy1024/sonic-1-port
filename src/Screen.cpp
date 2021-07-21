#include "Screen.h"
// === ESP Drawing === //

Screen::Screen() {
    
}

void Screen::create(Size _size, bool compileGraphics) {
    size = _size;
    isTexturesCompiled = compileGraphics;
    texList[TEX_OBJECTS]   = Texture(sprObjects, Size(1447, 100));
    texList[TEX_GHZ_TILES] = Texture(sprGhzBlocks, Size(16, 7024));
    texList[TEX_GHZ_GIMM]  = Texture(texGhzGim, Size(176, 128));

    // for (int i = 0; i < 60; i++)
    //     pal[i] = 0;

    #ifdef PC
    pcWnd = new sf::RenderWindow(sf::VideoMode(size.width, size.height), "Sonic");
    pcWnd->setFramerateLimit(60);

    if (isTexturesCompiled) {
        compiledImages = new sf::Image[TEXTURES_COUNT];
        compiledTextures = new sf::Texture[TEXTURES_COUNT];
        for (int i = 0; i < TEXTURES_COUNT; i++) {
            int w = texList[i].texSize.width;
            int h = texList[i].texSize.height;
            compiledImages[i].create(w, h, sf::Color::Cyan);
            for (int y = 0; y < h; y++) {
                for (int x = 0; x < w; x++) {
                    int pxPos = texList[i].indexes[y * w + x];
                    if (pxPos != 0)
                        compiledImages[i].setPixel(x, y, sf::Color(0xFF + (pal[pxPos - 1] << 8)));
                    else 
                        compiledImages[i].setPixel(x, y, sf::Color::Transparent);
                }
            }

            compiledTextures[i].loadFromImage(compiledImages[i]);
        }

    }
    #else 
     for (int i = 0; i < SCREEN_HEIGHT; i++) 
            for (int j = 0; j < SCREEN_WIDTH; j++) 
                scrBuff[i][j] = 0;  
    #endif

}

#ifdef PC
sf::RenderWindow* Screen::getWnd()
{
    return pcWnd;
}
#endif

void Screen::clear() {
    #ifdef PC
    if (isTexturesCompiled) {
        pcWnd->clear();
        return;   
    }
    buff.create(size.width, size.height, sf::Color((backColor << 8) + 0xff));
    #endif
}

void Screen::beginDraw() {
    #ifdef PC
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			pcWnd->close();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::F)) {
			winSize++;

			if (winSize > 3)
				winSize = 0;

			switch (winSize) {
				case 0: 
					pcWnd->setSize(sf::Vector2u(SCREEN_WIDTH, SCREEN_HEIGHT)); 
					break;
				case 1: 
					pcWnd->setSize(sf::Vector2u(SCREEN_WIDTH*2, SCREEN_HEIGHT*2)); 
					break;
				case 2: 
					pcWnd->setSize(sf::Vector2u(SCREEN_WIDTH*3, SCREEN_HEIGHT*3)); 
					break;

			}
		}
    #else
        for (int i = 0; i < SCREEN_HEIGHT; i++) 
            for (int j = 0; j < SCREEN_WIDTH; j++) 
                scrBuff[i][j] = 0;  
    #endif
}

void Screen::endDraw() {
    #ifdef PC
        if (!compiledTextures) {
            sf::Texture t;
            t.loadFromImage(buff);
            sf::Sprite s;
            s.setTexture(t);
            pcWnd->draw(s);
        } else {

        }
        pcWnd->display();
    #else
        M5.Lcd.startWrite();
        int _scrX = 160 - SCREEN_WIDTH / 2;
        int _scrY = 120 - SCREEN_HEIGHT / 2;
        M5.Lcd.setWindow(_scrX, _scrY, _scrX + SCREEN_WIDTH -1 , _scrY + SCREEN_HEIGHT - 1);
        for (int t = 0; t < SCREEN_HEIGHT / PART_BUFF_SIZE; t++) {
            for (int i = 0; i < PART_BUFF_SIZE; i++) {
                for (int j = 0; j < SCREEN_WIDTH; j++) {           
                    uint8_t px = scrBuff[t*PART_BUFF_SIZE + i][j];
                    if (px != 0) 
                        drawBuff[(i * SCREEN_WIDTH) + j] = getM5Color(pal[px - 1]);
                    else 
                        drawBuff[(i * SCREEN_WIDTH) + j] = getM5Color(backColor);
                }
            }
            M5.Lcd.pushColors(drawBuff, SCREEN_WIDTH * PART_BUFF_SIZE);
        }
        M5.Lcd.endWrite();

    #endif
}

#ifdef CORE
uint16_t Screen::getM5Color(int col) {
    uint8_t r = (0xFF0000 & col) >> 16;
    uint8_t g = (0x00FF00 & col) >> 8;
    uint8_t b = (0x0000FF & col);
    return M5.Lcd.color565(r, g, b); 
}
#endif

void Screen::drawRect(uint8_t tex, IntRect texRect, Vector2f pos, Vector2i offset, 
                        bool horFlip = false, bool verFlip = false, float angle = 0.0)
{
    if (pos.x + texRect.width - offset.x < 0 || 
        pos.x - (texRect.width - offset.x) > size.width || 
        pos.y + texRect.height - offset.y < 0 || 
        pos.y - (texRect.height - offset.y) > size.height)
            return;

    int pxPos;
    int drawX, drawY;
    int px, py;
    float cosA = cos(radians(angle));
    float sinA = sin(radians(angle)); 

    if (isTexturesCompiled) {
        sf::IntRect rect = sf::IntRect(
            texRect.left, texRect.top, texRect.width, texRect.height);
        sf::Sprite spr = sf::Sprite(compiledTextures[tex], rect);
        spr.setRotation(angle);
        spr.setPosition(pos.x, pos.y);
        spr.setOrigin(offset.x, offset.y);
        if (horFlip) {
            spr.setScale(-1, 1);
            spr.setOrigin(texRect.width-offset.x, offset.y);
        } 
        /*if (verFlip) {
            spr.setScale(1, -1);
            spr.setOrigin(offset.x, -offset.y);
        }*/
        pcWnd->draw(spr);
        return;
    }


    for (int i = texRect.top; i < texRect.top + texRect.height; i++) {
        for (int j = texRect.left; j < texRect.left + texRect.width; j++) {

            pxPos = texList[tex].indexes[(i * texList[tex].texSize.width) + j];
            
            if (pxPos != 0) {
                if (!horFlip) drawX = j - texRect.left - offset.x;
                else          drawX = texRect.left + texRect.width - j - 1 - offset.x;

                if (!verFlip) drawY = i - texRect.top - offset.y;
                else          drawY = texRect.top + texRect.height - i - 1 - offset.y;

                px = pos.x + int(drawX * float(cosA) - drawY * float(sinA));
                py = pos.y + int(drawX * float(sinA) + drawY * float(cosA));


                if (px >= 0 && py >= 0 && px < size.width && py < size.height) {
                #ifdef PC
                    buff.setPixel(px, py, sf::Color(0xFF + (pal[pxPos - 1] << 8)));      
                #else
                    scrBuff[py][px] = pxPos;
                #endif
                }
            }  
        }


    }          
}


Size Screen::getSize() {
    return size;
}
