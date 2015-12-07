#include "Manager.hpp"

#include <iostream>
#include <iomanip>

#include "CONST.hpp"
#include "Press.hpp"

Manager::Manager():
	m_state( true ),
	m_pointcount(0, CONST::INITIAL_INCREASE )
{}

void Manager::update()
{
	checkInput();
	m_pointcount.update();
}

void Manager::render(SDL_Renderer *renderer)
{
	std::cout << "you have " << std::setw(10) << m_pointcount.getCount() << " points." << std::setw(5) << m_pointcount.getIncreaseRate() << " increase rate." << std::endl;
}

bool Manager::getState()
{
	return m_state;
}

void Manager::checkInput()
{
	SDL_Event incomingEvent;
	while(SDL_PollEvent(&incomingEvent)){
		switch(incomingEvent.type){
			case SDL_QUIT:
				//if user closes program, then brake refresh loop by setting go = false
				m_state = false;
				break;
			case SDL_MOUSEBUTTONDOWN:
				std::cout << "click" << std::endl;
				m_pointcount.changeIncreaseRate(1);
				break;
		}
	}
}
