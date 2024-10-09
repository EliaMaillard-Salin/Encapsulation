#include "Integer.h"
#include <cmath>

Integer::Integer() : m_value(0)
{}

Integer::Integer(int value) : m_value(value)
{}

Integer::~Integer()
{}

#pragma region OPERATOR_WITH_INT

void Integer::operator+=(const int right)
{
	m_value += right;
}

void Integer::operator-=(const int right)
{
	m_value -= right;
}

void Integer::operator*=(const int right)
{
	m_value *= right;
}

void Integer::operator/=(const int right)
{
	m_value /= right;
}

void Integer::operator%=(const int right)
{
	m_value %= right;
}



Integer& Integer::operator+(const int right)
{
	Integer result = Integer(m_value);
	result += right;
	return result;
}

Integer& Integer::operator-(const int right)
{
	Integer result = Integer(m_value);
	result -= right;
	return result;
}

Integer& Integer::operator*(const int right)
{
	Integer result = Integer(m_value);
	result *= right;
	return result;
}

Integer& Integer::operator/(const int right)
{
	Integer result = Integer(m_value);
	result /= right;
	return result;
}

Integer& Integer::operator%(const int right)
{
	Integer result = Integer(m_value);
	result %= right;
	return result;
}

#pragma endregion

#pragma region OPERATOR_WITH_INTEGER

void Integer::operator+=(const Integer& right)
{
	m_value += right.m_value;
}

void Integer::operator-=(const Integer& right)
{
	m_value -= right.m_value;
}

void Integer::operator*=(const Integer& right)
{
	m_value *= right.m_value;
}

void Integer::operator/=(const Integer& right)
{
	m_value /= right.m_value;
}

void Integer::operator%=(const Integer& right)
{
	m_value %= right.m_value;
}



Integer& Integer::operator+(const Integer& right)
{
	Integer result = Integer(m_value);
	result += right;
	return result;
}

Integer& Integer::operator-(const Integer& right)
{
	Integer result = Integer(m_value);
	result -= right;
	return result;
}

Integer& Integer::operator*(const Integer& right)
{
	Integer result = Integer(m_value);
	result *= right;
	return result;
}

Integer& Integer::operator/(const Integer& right)
{
	Integer result = Integer(m_value);
	result /= right;
	return result;
}

Integer& Integer::operator%(const Integer& right)
{
	Integer result = Integer(m_value);
	result %= right;
	return result;
}

#pragma endregion

#pragma region OPERATOR_WITH_FLOAT

void Integer::operator+=(const float right)
{
	m_value += static_cast<int>(right);
}

void Integer::operator-=(const float right)
{
	m_value -= static_cast<int>(right);
}

void Integer::operator*=(const float right)
{
	m_value *= static_cast<int>(right);
}

void Integer::operator/=(const float right)
{
	m_value/= static_cast<int>(right);
}

void Integer::operator%=(const float right)
{
	m_value%= static_cast<int>(right);
}


Integer& Integer::operator+(const float right)
{
	Integer result = Integer(m_value);
	result += right;
	return result;
}

Integer& Integer::operator-(const float right)
{
	Integer result = Integer(m_value);
	result -= right;
	return result;
}

Integer& Integer::operator*(const float right)
{
	Integer result = Integer(m_value);
	result *= right;
	return result;
}

Integer& Integer::operator/(const float right)
{
	Integer result = Integer(m_value);
	result /= right;
	return result;
}

Integer& Integer::operator%(const float right)
{
	Integer result = Integer(m_value);
	result %= right;
	return result;
}

#pragma endregion

//std::ostream& Integer::operator<<(std::ostream& os)
//{
//	os << m_value;
//	return os;
//}

std::ostream& operator<<(std::ostream& os, const Integer integer)
{
	os << integer.m_value;
	return os;
}



void Integer::power(int exposant)
{
	m_value = static_cast<int>(std::pow(m_value, exposant));
}