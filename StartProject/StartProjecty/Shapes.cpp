#include "pch.h"
#include "Shapes.h"

#pragma region Rectangle

CustomRectangle::CustomRectangle() : m_position(VECT2()), m_w(1.0f), m_h(1.f), m_color(COLOR())
{}

CustomRectangle::CustomRectangle(VECT2 position, float w, float h, COLOR color) : m_position(position), m_w(w), m_h(h), m_color(color)
{}

const SDL_Rect* CustomRectangle::ToSDLRect()
{
	SDL_Rect rect;
	rect.x = m_position.m_x;
	rect.y = m_position.m_y;
	rect.h = m_h;
	rect.w = m_w;
	return &rect;
}

#pragma endregion

#pragma region Circle

CustomCircle::CustomCircle() : m_radius(0.f)
{}

CustomCircle::CustomCircle(VECT2 position, float radius, COLOR color) : m_position(position), m_radius(radius),m_color(color)
{}

#pragma endregion