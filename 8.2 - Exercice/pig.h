#pragma once

#include "entity.h"

class Dragon;

class Pig : public Entity 
{
public:
	/**
	 * \brief 
	 * \param health 
	 * \param attack 
	 */
	Pig(int health, int attack);
	~Pig(){};

	void Print() const override;
private:
};

