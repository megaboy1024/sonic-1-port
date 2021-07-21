#include "Settings.h"
#include "Screen.h"

#include "Level.h"
#include "structs/Geometry.h"

Level lv;
Screen scr;

int main() {
	scr.create(Size(SCREEN_WIDTH, SCREEN_HEIGHT), false);

	while (scr.getWnd()->isOpen()) {
		lv = Level();
		lv.create();
		while (lv.isLevelPlaying()) {

			sf::Event event;
			while (scr.getWnd()->pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					scr.getWnd()->close();
				if (event.type == sf::Event::KeyPressed) {
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {

					}		
				}
			}
			
			lv.update();
			scr.beginDraw();
			scr.clear();
			lv.draw();
			scr.endDraw();
		}
	}
	return 0;
}