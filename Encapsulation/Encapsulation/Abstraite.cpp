#include "Abstraite.h"


AMovable::AMovable() : m_position(Vector2()), m_speed(1.f)
{}

AMovable::AMovable(float posX, float posY, float speed) : m_position(Vector2(posX,posY)), m_speed(speed)
{}

void AMovable::SetPosition(float x, float y)
{
	m_position.SetValue(x, y);
}

void AMovable::SetSpeed( float speed )
{
	m_speed = speed;
}
