#include "World.h"


World::World(): m_hasEnded(false), m_entitiesList()
{}

void World::Init()
{
	StaticObject* pStaticObject = new StaticObject(3.f, 3.f);
	m_entitiesList.push_back(pStaticObject);
	BreakableObject* pBreakableObject = new BreakableObject(20.f, 6.f,1.f,1.f);
	m_entitiesList.push_back(pBreakableObject);

	Mob* pMob = new Mob(0.f, 0.f, 20.f, 20.f,Vector2(0.f,0.f));
	m_entitiesList.push_back(pMob);
	Player* pPlayer = new Player(15.f, 13.f, 10.f, 10.f, Vector2(0.f, 0.f));
	m_entitiesList.push_back(pPlayer);

	pMob->SetSpeed(1.f);
	pPlayer->SetSpeed(1.f);

}

void World::Step()
{
	Player* pPlayer = nullptr;
	Mob* pMob = nullptr;
	BreakableObject* pBreakableObject = nullptr ;
	for (int i = 0; i < m_entitiesList.size(); i++)
	{
		Entity* pEntity;
		pEntity = dynamic_cast<Player*>(m_entitiesList[i]);
		if (pEntity != nullptr)
			pPlayer = (Player*)pEntity;

		pEntity = dynamic_cast<Mob*>(m_entitiesList[i]);
		if (pEntity != nullptr)
			pMob = (Mob*)pEntity;

		pEntity = dynamic_cast<BreakableObject*>(m_entitiesList[i]);
		if (pEntity != nullptr)
			pBreakableObject =(BreakableObject*)pEntity;
	}

	pMob->SetTargetPosition(pBreakableObject->GetPosition());

	if (pMob->IsDead() == false)
	{
		pMob->Move();
		pPlayer->SetTargetPosition(pMob->GetPosition());
		pPlayer->Move();

		if ( pPlayer->GetPosition().GetDistanceWith(pMob->GetPosition()) <= 1 )
			pPlayer->Attack(pMob);
	}
	else if (pBreakableObject->IsBroken() == false)
	{
		pPlayer->SetTargetPosition(pBreakableObject->GetPosition());
		pPlayer->Move();

		if ( pPlayer->GetPosition().GetDistanceWith(pBreakableObject->GetPosition()) <= 1 )
			pPlayer->Attack(pBreakableObject);
	} 
	else
	{
		m_hasEnded = true;
	}


}