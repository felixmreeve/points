#ifndef _PRESS_H_
#define _PRESS_H_

#include <SDL2/SDL.h>

class Press
{
private:
	int m_rad;
	SDL_Color m_col;
public:
	Press();
	void update();
	void render(SDL_Renderer *renderer);
};

#endif /* _PRESS_H_ */
