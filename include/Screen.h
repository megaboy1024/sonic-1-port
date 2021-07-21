#pragma once
#include "Settings.h"
#include "content\textures\texObjects.h"
#include "content\textures\texGhzBlocks.h"
#include "content\textures\texGhzGim.h"
#include "structs\Geometry.h"

struct Texture {
    Texture() {}
    Texture(const uint8_t* indexes, Size texSize) {
        this->indexes = indexes;
        this->texSize = texSize;
    }

    const uint8_t* indexes;
    Size texSize;
};


class Screen {
    public:
        Screen();
        void create(Size _size, bool compileGraphics);
        void clear();
        void beginDraw();
        void endDraw();
        void drawRect(uint8_t tex, IntRect texRect, 
                      Vector2f pos, Vector2i offset, 
                      bool horFlip, bool verFlip, float angle);

        void setPalColor(int index, int col) { pal[index] = col; }
        int getPalColor(int index) { return pal[index]; }
        Size getSize();
        int backColor = 0;
    #ifdef PC
        sf::RenderWindow* getWnd();
    #endif
    private:
        Size size;
        Texture texList[TEXTURES_COUNT];
        int pal[60] = { 
            0x000000, 0x202080, 0x4040a0, 0x6060c0, 0x8080e0, 0xe0e0e0, 0xa0a0a0, 0x808080, 0x404040, 0xe0a080, 0xa06040, 0xe00000, 0x800000, 0x400000, 0xe0e000,
            0x000000, 0x204020, 0x406040, 0x608060, 0x80c080, 0xe0e0e0, 0xa0a0a0, 0x808080, 0x404040, 0xa0e080, 0xa06040, 0xe0e000, 0x808000, 0x404000, 0xe00000,
            0x200000, 0xe0e0e0, 0x602000, 0x804000, 0xc06000, 0xe08000, 0xe0c000, 0x6080a0, 0x6080e0, 0x80a0e0, 0xa0c0e0, 0x004000, 0x006000, 0x40a000, 0x80e000,
            0x2000a0, 0x2040c0, 0x6080e0, 0xa0c0e0, 0xc0e0e0, 0xe0e0e0, 0xc0a0e0, 0xa080e0, 0x8060e0, 0x80e000, 0x40a000, 0x200000, 0x602000, 0xc06000, 0xe0c000,
        };
        uint8_t scrBuff[SCREEN_HEIGHT][SCREEN_WIDTH];
        bool isTexturesCompiled;
    #ifdef PC
        sf::Texture* compiledTextures;
        sf::Image* compiledImages;
        sf::RenderWindow* pcWnd;
        sf::Image buff;
        int winSize = 0;
    #else
        uint16_t getM5Color(int col);
    #endif
};

extern Screen scr;