#ifndef WORLD__H_
#define WORLD__H_
#include <vector>
#include "Entities.h"
#include "Vector.h"

class World
{

public : 
	World();
	~World() {};

	void Init();
	void Step();

	bool HasEnded() { return m_hasEnded; }

private:
	bool m_hasEnded;
	std::vector<Entity*> m_entitiesList;
};

#endif