#include "Entities.h"



Entity::Entity(): m_position()
{}

void Entity::SetPosition(float x, float y)
{
	m_position.SetValue(x,y);
}

Vector2 Entity::GetPosition()
{
	return m_position;
}

#pragma region OBJECTS


StaticObject::StaticObject()
{}

StaticObject::StaticObject(float posX, float posY)
{
	SetPosition(posX, posY);
	std::cout << "Static Object just created at x = " + std::to_string(m_position.GetX()) + " and y = " + std::to_string(m_position.GetY()) << std::endl;
}

Vector2 StaticObject::GetPosition()
{
	return Entity::GetPosition();
}


BreakableObject::BreakableObject() : m_isBroken(false)
{}

BreakableObject::BreakableObject(float posX, float posY, float maxHP, float HP) : m_isBroken(false)
{
	SetPosition(posX, posY);
	SetMaxHP(maxHP);
	SetHP(maxHP);
	std::cout << "Breakable Object just created at x = " + std::to_string(m_position.GetX()) + " and y = " + std::to_string(m_position.GetY()) + " with " + std::to_string(GetMaxHP()) << std::endl;
}

void BreakableObject::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (GetHP() <= 0)
	{
		std::cout << "Breakable Object just broke" << std::endl;
		m_isBroken = true;
	}
}

Vector2 BreakableObject::GetPosition()
{
	return Entity::GetPosition();
}

#pragma endregion


Mob::Mob():m_isDead(false)
{}

Mob::Mob(float posX, float posY, float maxHP, float HP, Vector2 move): m_isDead(false)
{
	Entity::SetPosition(posX, posY);
	SetMaxHP(maxHP);
	SetHP(maxHP);
	m_targetPosition.SetValue(move.GetX(), move.GetY());
	std::cout << "Mob just created at x = " + std::to_string(GetPosition().GetX()) + " and y = " + std::to_string(GetPosition().GetY()) + " with " + std::to_string(GetMaxHP()) + " with direction x = " + std::to_string(m_targetPosition.GetX()) + " and y = " + std::to_string(m_targetPosition.GetY()) << std::endl;
}

void Mob::TakeDamage( float damage)
{
	Alive::TakeDamage(damage);
	if (GetHP() <= 0 )
	{
		std::cout << " Mob Just Die " << std::endl;
		m_isDead = true;
	}
}

void Mob::Move()
{
	Vector2 movingVector = m_targetPosition - GetPosition();
	movingVector *= GetSpeed();
	movingVector.Normalize();
	Entity::SetPosition(GetPosition().GetX() + movingVector.GetX(), GetPosition().GetY() + movingVector.GetY());
	std::cout << "Mob move to x = " + std::to_string(GetPosition().GetX()) + " and y = " + std::to_string(GetPosition().GetY()) << std::endl;
}

Vector2 Mob::GetPosition()
{
	return Entity::GetPosition();
}

void Mob::SetTargetPosition(Vector2 pVector)
{
	m_targetPosition = pVector;
}



Player::Player(): m_isDead(false)
{}

Player::Player(float posX, float posY, float maxHP, float HP, Vector2 move): m_isDead(false)
{
	Entity::SetPosition(posX, posY);
	SetMaxHP(maxHP);
	SetHP(maxHP);
	m_targetPosition.SetValue(move.GetX(), move.GetY());
	std::cout << "Player just created at x = " + std::to_string(GetPosition().GetX()) + " and y = " + std::to_string(GetPosition().GetY()) + " with " + std::to_string(GetMaxHP()) + " with direction x = " + std::to_string(m_targetPosition.GetX()) + " and y = " + std::to_string(m_targetPosition.GetY()) << std::endl;
}

void Player::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	std::cout << " Player Just Die " << std::endl;
}

void Player::Move()
{
	Vector2 movingVector = m_targetPosition - GetPosition();
	movingVector *= GetSpeed();
	movingVector.Normalize();
	Entity::SetPosition(GetPosition().GetX() + movingVector.GetX(), GetPosition().GetY() + movingVector.GetY());
	std::cout << "Player move to x = " + std::to_string(GetPosition().GetX()) + " and y = " + std::to_string(GetPosition().GetY()) << std::endl ;
}

void Player::Attack(Alive* pAlive)
{
	pAlive->TakeDamage(10);
	if (GetHP() <= 0)
	{
		std::cout << " Player Just Die " << std::endl;
		m_isDead = true;
	}
}

Vector2 Player::GetPosition()
{
	return Entity::GetPosition();
}

void Player::SetTargetPosition(Vector2 pVector)
{
	m_targetPosition = pVector;
}