#include "Vector.h"
#include "math.h"

Vector2::Vector2(): m_x(0.f), m_y(0.f)
{}


Vector2::Vector2( float x, float y) : m_x(x), m_y(y)
{}


void Vector2::SetValue(float x, float y)
{
	m_x = x; 
	m_y = y;
}


void Vector2::SetX( float x )
{
	m_x = x;
}

void Vector2::SetX( std::string strX)
{
	SetX(std::stof(strX));
	std::cout << "X set at " + strX << std::endl;
}

void Vector2::SetY(float y)
{
	m_y = y;
}

void Vector2::SetY(std::string strY)
{
	SetY(std::stof(strY));
	std::cout << "Y set at " + strY << std::endl;
}

float Vector2::GetX() const
{
	return m_x;
}


float Vector2::GetY() const
{
	return m_y;
}

Vector2 Vector2::operator+(const Vector2& right)
{
	Vector2 result;
	result.m_x = m_x + right.GetX();
	result.m_y = m_y + right.GetY();

	return result;
}


Vector2 Vector2::operator-(const Vector2& right)
{
	Vector2 result;
	result.m_x = m_x - right.m_x;
	result.m_y = m_y - right.m_y;

	return result;
}


Vector2 Vector2::operator*(const float right)
{
	Vector2 result;
	result.m_x = m_x * right;
	result.m_y = m_y * right;

	return result;
}



void Vector2::operator+=(const Vector2& right)
{
	m_x += right.GetX();
	m_y += right.GetY();
}


void Vector2::operator-=(const Vector2& right)
{
	m_x -= right.GetX();
	m_y -= right.GetY();
}


void Vector2::operator*=(const float right)
{
	m_x *= right;
	m_y *= right;
}


float Vector2::GetDistanceWith(const Vector2& destination)
{
	float distance;
	
	distance = sqrt(pow( ( m_x - destination.GetX() ),2) + pow( ( m_y - destination.GetY() ),2));

	return distance;
}


void Vector2::Normalize()
{
	float invNorm = 1 / sqrt( (m_x * m_x + m_y * m_y) );
	m_x *= invNorm;
	m_y *= invNorm;
}