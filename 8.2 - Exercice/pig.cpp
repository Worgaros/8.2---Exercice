#include "pig.h"
#include "dragon.h"

#include <iostream>

Pig::Pig(const int health, const int attack) : Entity(health, attack)
{ }

void Pig::Print() const
{
	if(!IsAlive())
	{
		std::cout << "Pigs : DEAD\n";
	}
	else {
		std::cout << "Pig :\n";
		Entity::Print();
	}
}
