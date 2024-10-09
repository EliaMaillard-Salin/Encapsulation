#ifndef ALIVE__H_
#define ALIVE__H_


class Alive
{

public: 
	Alive();
	Alive(float maxHP, float HP);
	virtual ~Alive() {};

	virtual float GetMaxHP();
	virtual float GetHP();
	virtual void TakeDamage(float damage);

	void SetMaxHP(float maxHP);
	void SetHP(float HP);

private: 
	float m_maxHP;
	float m_HP;
};

#endif