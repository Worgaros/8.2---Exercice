#include "entity.h"
#include <iostream>

Entity::Entity(const int health, const int attack) :
	health_(health),
	attack_(attack)
{ }

void Entity::TakeDamage(const int attack)
{
	health_ -= attack;
}

bool Entity::IsAlive() const
{
	return health_ > 0;
}

void Entity::Attack(Entity& entity)
{
	if(IsAlive())
	{
		entity.TakeDamage(attack_);
	}
}

void Entity::Print() const
{
	std::cout << "Health = " << health_ << "\nAttack = " << attack_ << "\n";
}
