#ifndef ENTITIES__H_
#define ENTITIES__H_

#include "Vector.h"
#include "Abstraite.h"
#include "Alive.h"
#include "Interface.h"

#include <iostream>
#include <string>

class Entity
{
public: 
	Entity();
	virtual ~Entity() {};

	virtual void SetPosition(float x, float y);
	virtual Vector2 GetPosition();

protected:
	Vector2 m_position;
};

#pragma region OBJECTS

class StaticObject : public Entity
{

public:
	StaticObject();
	StaticObject(float posX, float posY);
	~StaticObject() {};

	Vector2 GetPosition() override;

};


class BreakableObject : public Entity, public Alive
{
public:
	BreakableObject();
	BreakableObject(float posX, float posY, float maxHP, float HP);
	~BreakableObject() {};

	bool IsBroken() { return m_isBroken; }

	Vector2 GetPosition() override;
	void TakeDamage(float damage) override;
private:
	bool m_isBroken;
};


#pragma endregion



class Mob : public Entity, public Alive, public AMovable
{

public :
	Mob();
	Mob(float posX, float posY, float maxHP, float HP, Vector2 move);
	~Mob() {};


	void SetTargetPosition(Vector2 pVector);

	Vector2 GetPosition() override;
	void TakeDamage(float damage) override ;
	void Move() override;

	bool IsDead() { return m_isDead; }

private : 
	bool m_isDead;
	Vector2 m_targetPosition;
};


class Player : public Entity, public Alive, public AMovable, public IAttacker
{

public:
	Player();
	Player(float posX, float posY, float maxHP, float HP, Vector2 move);
	~Player() {};

	void SetTargetPosition(Vector2 pVector);

	Vector2 GetPosition() override;
	void TakeDamage(float damage) override;
	void Move() override;
	void Attack(Alive* pAlive);

private:
	bool m_isDead;
	Vector2 m_targetPosition;
};



#endif
