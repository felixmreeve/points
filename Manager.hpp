#ifndef _MANAGER_H_
#define _MANAGER_H_

#include <SDL2/SDL.h>
#include "Pointcount.hpp"

class Manager
{
private:
	bool m_state;
	Pointcount m_pointcount;
public:
	Manager();
	void init();
	void update();
	void render(SDL_Renderer *renderer);
	bool getState();
	void checkInput();
};

#endif /* _MANAGER_H_ */
