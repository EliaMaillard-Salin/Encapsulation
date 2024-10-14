#include "Colors.h"

COLOR::COLOR(): m_r(0), m_g(0), m_b(0), m_a(255)
{}

COLOR::COLOR(int r, int g, int b, int a ) : m_r(r), m_g(g), m_b(b), m_a(a)
{}

Color COLOR::ToRaylibColor()
{
	Color color;
	color.r = m_r;
	color.g = m_g;
	color.b = m_b;
	color.a = m_a;

	return color;
}