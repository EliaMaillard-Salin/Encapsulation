#ifndef ABSTRAITES__H_
#define ABSTRAITES__H_
#include "Vector.h"

class AMovable
{

public: 
	AMovable();
	AMovable(float posX, float posY, float speed);
	virtual ~AMovable() {};

	virtual void SetPosition( float x, float y );
	virtual void SetSpeed( float speed );
	
	float GetSpeed() { return m_speed; }

	virtual void Move() = 0;

private: 
	Vector2 m_position;
	float m_speed;
};

#endif