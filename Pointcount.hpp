#ifndef _POINTCOUNT_H_
#define _POINTCOUNT_H_

#include <iostream>
#include <string>

#include <SDL2/SDL.h>

#include "CONST.hpp"

class Pointcount
{
private:
	big_num m_count;
	big_num m_increaseRate;
public:
	Pointcount(big_num count, big_num increaseRate);
	void print(std::string msg);
	void update();
	big_num getCount();
	big_num getIncreaseRate();

	void operator += (const int x);

	void increase(big_num x);
	void decrease(big_num x);
	void changeIncreaseRate(big_num x);
};

#endif /* _POINTCOUNT_H_ */
