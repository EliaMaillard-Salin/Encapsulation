#ifndef INTEGER__H_
#define INTEGER__H_

#include <iostream>

class Integer
{

public:
	Integer();
	explicit Integer(int value);
	~Integer();

	void operator+=(const int right);
	void operator-=(const int right);
	void operator*=(const int right);
	void operator/=(const int right);
	void operator%=(const int right);

	void operator+=(const Integer& right);
	void operator-=(const Integer& right);
	void operator*=(const Integer& right);
	void operator/=(const Integer& right);
	void operator%=(const Integer& right);

	void operator+=(const float right);
	void operator-=(const float right);
	void operator*=(const float right);
	void operator/=(const float right);
	void operator%=(const float right);

	Integer& operator+(const int right);
	Integer& operator-(const int right);
	Integer& operator*(const int right);
	Integer& operator/(const int right);
	Integer& operator%(const int right);

	Integer& operator+(const Integer& right);
	Integer& operator-(const Integer& right);
	Integer& operator*(const Integer& right);
	Integer& operator/(const Integer& right);
	Integer& operator%(const Integer& right);

	Integer& operator+(const float right);
	Integer& operator-(const float right);
	Integer& operator*(const float right);
	Integer& operator/(const float right);
	Integer& operator%(const float right);


	//std::ostream& operator<<(std::ostream& os);
	friend std::ostream& operator<<(std::ostream& os, const Integer integer);

	void power(int exposant);


private:
	int m_value;
};

std::ostream& operator<<(std::ostream& os, const Integer integer);

#endif