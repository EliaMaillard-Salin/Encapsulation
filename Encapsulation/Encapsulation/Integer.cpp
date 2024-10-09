#include "Integer.h"

#include "math.h"

Integer::Integer() : m_value(0)
{}

Integer::Integer(int value) : m_value(value)
{}

Integer::~Integer()
{}

#pragma region OPERATOR_WITH_INT

void Integer::operator+=(int right)
{
	m_value += right;
}

void Integer::operator-=(int right)
{
	m_value -= right;
}

void Integer::operator*=(int right)
{
	m_value *= right;
}

void Integer::operator/=(int right)
{
	m_value /= right;
}

void Integer::operator%=(int right)
{
	m_value %= right;
}



Integer Integer::operator+(int right)
{
	Integer result = m_value;
	result += right;
	return result;
}

Integer Integer::operator-(int right)
{
	Integer result = m_value;
	result -= right;
	return result;
}

Integer Integer::operator*(int right)
{
	Integer result = m_value;
	result *= right;
	return result;
}

Integer Integer::operator/(int right)
{
	Integer result = m_value;
	result /= right;
	return result;
}

Integer Integer::operator%(int right)
{
	Integer result = m_value;
	result %= right;
	return result;
}

#pragma endregion

#pragma region OPERATOR_WITH_FLOAT

void Integer::operator+=(float right)
{
	m_value += static_cast<int>(right);
}

void Integer::operator-=(float right)
{
	m_value -= static_cast<int>(right);
}

void Integer::operator*=(float right)
{
	m_value *= static_cast<int>(right);
}

void Integer::operator/=(float right)
{
	m_value/= static_cast<int>(right);
}

void Integer::operator%=(float right)
{
	m_value%= static_cast<int>(right);
}


Integer Integer::operator+(float right)
{
	Integer result = m_value;
	result += right;
	return result;
}

Integer Integer::operator-(float right)
{
	Integer result = m_value;
	result -= right;
	return result;
}

Integer Integer::operator*(float right)
{
	Integer result = m_value;
	result *= right;
	return result;
}

Integer Integer::operator/(float right)
{
	Integer result = m_value;
	result /= right;
	return result;
}

Integer Integer::operator%(float right)
{
	Integer result = m_value;
	result %= right;
	return result;
}

#pragma endregion

std::ostream& Integer::operator<<(std::ostream& os)
{
	os << m_value;
	return os;
}

void Integer::power(int exposant)
{
	m_value = pow(m_value, exposant);
}