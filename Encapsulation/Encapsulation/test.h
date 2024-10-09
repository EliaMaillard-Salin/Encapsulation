#ifndef TEST_H__
#define TEST_H__

#include <string>

class Point
{


public: 
	Point();
	Point(float x, float y, float z);
	~Point() {};
	float m_x;
	float m_y;
	float m_z;

	std::string ToString();

	virtual void AAAA() {};

};


class pointB : public Point
{

	void AAA() {};

};

#endif