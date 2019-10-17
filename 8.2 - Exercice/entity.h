#pragma once
class Entity
{
public:
	/**
	 * \brief 
	 * \param health 
	 * \param attack 
	 */
	Entity(int health, int attack);
	virtual ~Entity() {};

	void TakeDamage(const int attack);
	virtual bool IsAlive() const;
	void Attack(Entity& entity);
	
	virtual void Print() const;
protected: 
	int health_;
	int attack_;
};

