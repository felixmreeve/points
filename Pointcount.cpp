#include "Pointcount.hpp"

Pointcount::Pointcount(big_num count, big_num increaseRate):
	m_count( count ),
	m_increaseRate( increaseRate )
{}

void Pointcount::print(std::string msg)
{
	std::cout << msg << std::endl;
}

void Pointcount::update()
{
	increase(m_increaseRate);
}

big_num Pointcount::getCount()
{
	return m_count;
}

big_num Pointcount::getIncreaseRate()
{
	return m_increaseRate;
}

void Pointcount::operator += (const int x)
{
	m_count += x;
}

void Pointcount::increase(big_num x)
{
	m_count += x;
}

void Pointcount::decrease(big_num x)
{
	m_count -= x;
}

void Pointcount::changeIncreaseRate(big_num x)
{
	m_increaseRate += x;
}
