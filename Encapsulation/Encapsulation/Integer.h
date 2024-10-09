#pragma once

#include <iostream>

class Integer
{

public: 
	Integer();
	Integer(int value);
	~Integer();

	void operator+=(int right);
	void operator-=(int right);
	void operator*=(int right);
	void operator/=(int right);
	void operator%=(int right);

	void operator+=(float right);
	void operator-=(float right);
	void operator*=(float right);
	void operator/=(float right);
	void operator%=(float right);

	Integer operator+(int right);
	Integer operator-(int right);
	Integer operator*(int right);
	Integer operator/(int right);
	Integer operator%(int right);

	Integer operator+(float right);
	Integer operator-(float right);
	Integer operator*(float right);
	Integer operator/(float right);
	Integer operator%(float right);

	std::ostream& operator<<(std::ostream& os);

	void power(int exposant);


private: 
	int m_value;
};

