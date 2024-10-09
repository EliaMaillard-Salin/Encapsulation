#include "test.h"



Point::Point(): m_x(0.f), m_y(0.f), m_z(0.f) 
{}


Point::Point(float x, float y, float z) : m_x(x), m_y(y), m_z(z)
{}

std::string Point::ToString()
{
	std::string str_x = std::to_string(m_x);
	std::string str_y = std::to_string(m_y);
	std::string str_z = std::to_string(m_z);

	std::string toString;
	toString = "Point : x: " + str_x.erase( str_x.size() - 5 ) + ",y: " + str_y.erase(str_y.size() - 5) + ";z: " + str_z.erase(str_z.size() - 5);
	return toString;
}