#include "dragon.h"

#include <iostream>

Dragon::Dragon(const int health, const int attack) : Entity(health, attack)
{

}

void Dragon::Print() const
{
	std::cout << "Dragon :\n";
	Entity::Print();
}