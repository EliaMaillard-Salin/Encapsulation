#ifndef VECTORS__H_
#define VECTORS__H_

#include <string>
#include <iostream>

class Vector2
{

public : 

	Vector2();
	Vector2(float x, float y);
	~Vector2() {};

	void SetValue(float x, float y);
	
	void SetX(float x);
	void SetX(std::string strX);
	void SetY(float y);
	void SetY(std::string strY);

	float GetX() const;
	float GetY() const;

	Vector2 operator+(const Vector2& right);
	Vector2 operator-(const Vector2& right);

	Vector2 operator*(const float right);

	void operator+=(const Vector2& right);
	void operator-=(const Vector2& right);

	void operator*=(const float right);
	
	float GetDistanceWith( const Vector2& destination );

	void Normalize();

private:

	float m_x;
	float m_y;

};

#endif