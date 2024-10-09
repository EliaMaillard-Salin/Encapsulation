#include "Alive.h"


Alive::Alive() : m_maxHP(0.f), m_HP(0.f)
{}

Alive::Alive( float maxHP, float HP ) : m_maxHP(0.f), m_HP(HP)
{}


float Alive::GetMaxHP()
{
	return m_maxHP;
}

float Alive::GetHP()
{
	return m_HP;
}

void Alive::TakeDamage(float damage)
{
	m_HP -= damage;
}

void Alive::SetMaxHP(float maxHP)
{
	m_maxHP = maxHP;
}

void Alive::SetHP(float HP)
{
	m_HP = HP;
}