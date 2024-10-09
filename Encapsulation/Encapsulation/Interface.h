#ifndef INTERFACES__H_
#define INTERFACES__H_

#include "Alive.h"

class IAttacker
{

public: 
	virtual void Attack(Alive* pAlive) = 0;

};

#endif