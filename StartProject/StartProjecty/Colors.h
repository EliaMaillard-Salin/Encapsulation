#pragma once
#include "pch.h"

struct COLOR
{
public: 
	int m_r, m_g, m_b, m_a;

	COLOR();
	COLOR(int r, int g, int b, int a = 255 );
	~COLOR() {}

	Color ToRaylibColor();
};

