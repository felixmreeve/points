#include <iostream>
#include <SDL2/SDL.h>

#include "CONST.hpp"
#include "Manager.hpp"
#include "Pointcount.hpp"

int main()
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	bool go = true;

	Manager manager;

	SDL_Init(SDL_INIT_VIDEO);
	std::cout << "points" << std::endl;

	window = SDL_CreateWindow("points", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, CONST::SCREEN_HEIGHT, CONST::SCREEN_WIDTH, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	while(go){
		manager.update();
		manager.render(renderer);
		go = manager.getState();
		SDL_Delay(100);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
