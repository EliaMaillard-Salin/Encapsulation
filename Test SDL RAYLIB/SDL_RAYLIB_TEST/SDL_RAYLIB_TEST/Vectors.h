#ifndef VECTORS__H_
#define VECTORS__H_

#include <math.h>


struct VECT2
{
public: 
	float m_x;
	float m_y;

	VECT2();
	VECT2(float x, float y);
	~VECT2() {};

	void Normalize();
	float GetNorm();

	float GetDistanceWith(const VECT2& other);

	VECT2 operator+(const VECT2& other);
	VECT2 operator-(const VECT2& other);
	VECT2 operator*(const VECT2& other);
	VECT2 operator/(const VECT2& other);

	VECT2 operator*(const float& value);
	VECT2 operator/(const float& value);

	void operator+=(const VECT2& other);
	void operator-=(const VECT2& other);
	void operator*=(const VECT2& other);
	void operator/=(const VECT2& other);

	void operator*=(const float& value);
	void operator/=(const float& value);

	bool operator==(const VECT2& other);
	bool operator!=(const VECT2& other);

};

#endif