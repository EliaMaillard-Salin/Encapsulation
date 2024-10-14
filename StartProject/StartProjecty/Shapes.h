#ifndef SHAPES__H_
#define __SHAPES_H_

#include "Vectors.h"
#include "Colors.h"
class CustomRectangle
{
	friend class LibManager;
public:
	VECT2 m_position;
	float m_w, m_h;

	COLOR m_color;

	CustomRectangle();
	CustomRectangle(VECT2 position, float w, float h, COLOR color = COLOR());

	void Move() {};

private: 
	const SDL_Rect* ToSDLRect();
};

class CustomCircle
{
public:
	VECT2 m_position;
	float m_radius;

	COLOR m_color;

	CustomCircle();
	CustomCircle(VECT2 position, float radius, COLOR color = COLOR());


};

#endif
