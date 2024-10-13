#include "Vectors.h"

VECT2::VECT2() : m_x(0.f), m_y(0.f)
{}

VECT2::VECT2(float x, float y) : m_x(x), m_y(y)
{}


void VECT2::Normalize()
{
	float invNorm = 1 / GetNorm();
	m_x *= invNorm;
	m_y *= invNorm;
}

float VECT2::GetNorm()
{
	return sqrt((m_x * m_x + m_y * m_y));
}

float VECT2::GetDistanceWith(const VECT2& other)
{
	float distance;

	distance = sqrt( pow((m_x - other.m_x), 2) + pow((m_y - other.m_y), 2) );

	return distance;
}


void VECT2::operator+=(const VECT2& other)
{
	m_x += other.m_x;
	m_y += other.m_y;
}

void VECT2::operator-=(const VECT2& other)
{
	m_x -= other.m_x;
	m_y -= other.m_y;
}

void VECT2::operator*=(const VECT2& other)
{
	m_x *= other.m_x;
	m_y *= other.m_y;
}

void VECT2::operator/=(const VECT2& other)
{
	m_x /= other.m_x;
	m_y /= other.m_y;
}


void VECT2::operator*=(const float& value)
{
	m_x *= value;
	m_y *= value;
}

void VECT2::operator/=(const float& value)
{
	m_x *= value;
	m_y *= value;
}


VECT2 VECT2::operator+(const VECT2& other)
{
	VECT2 result = *this; 
	result += other;
	return result;
}

VECT2 VECT2::operator-(const VECT2& other)
{
	VECT2 result = *this;
	result -= other;
	return result;
}

VECT2 VECT2::operator*(const VECT2& other)
{
	VECT2 result = *this;
	result *= other;
	return result;
}

VECT2 VECT2::operator/(const VECT2& other)
{
	VECT2 result = *this;
	result /= other;
	return result;
}


VECT2 VECT2::operator*(const float& value)
{
	VECT2 result = *this;
	result *= value;
	return result;
}

VECT2 VECT2::operator/(const float& value)
{
	VECT2 result = *this;
	result /= value;
	return result;
}






bool VECT2::operator==(const VECT2& other) 
{
	return m_x == other.m_x && m_y == other.m_y;
}

bool VECT2::operator!=(const VECT2& other)
{
	return m_x != other.m_x || m_y != other.m_y;
}
