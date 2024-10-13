#pragma once
struct VECT2
{
	float x;
	float y;

	VECT2();
	VECT2(float x, float y);
	~VECT2() {};

	VECT2 operator+(const VECT2& other);
	VECT2 operator-(const VECT2& other);
	VECT2 operator*(const VECT2& other);
	VECT2 operator/(const VECT2& other);

	VECT2 operator*(const float& value);
	VECT2 operator/(const float& value);
	
	VECT2 operator+=(const VECT2& other);
	VECT2 operator-=(const VECT2& other);
	VECT2 operator*=(const VECT2& other);
	VECT2 operator/=(const VECT2& other);

	VECT2 operator*=(const float& value);
	VECT2 operator/=(const float& value);

	bool operator==(const VECT2& other);
	bool operator!=(const VECT2& other);
	bool operator<=(const VECT2& other);
	bool operator<(const VECT2& other);
	bool operator>=(const VECT2& other);
	bool operator>(const VECT2& other);

};

