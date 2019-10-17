#pragma once

#include "pig.h"

class Dragon : public Entity 
{
public:
	Dragon(int health, int attack);
	~Dragon(){};

	/**
	 * \brief Print all information of the dragon
	 */
	void Print() const override;
private:
};


