#ifndef CHARACTER_H
	#include "dice.h"


#include <cstdio>

#include <string>
#include <thread>
#include <chrono>
#include "Inventory.h"

class generalCharacter
{
public:
	generalCharacter();

	generalCharacter(std::string type, int level, int hpDice, Inventory& inventory);

	~generalCharacter();

	void getsHit(int dmg);


private:
	std::string type;
	int hpDice;
	int level;
	int hp;
	int physicalDef;
	int magicalDef;
	int dodgeSkill;
	Inventory equipment;

};

class Player : public generalCharacter {
public:
	Player();

	Player(std::string name, int level, int hpDice, std::string type, int strengthBonus, int magicBonus, int dextBonus);

	int magicAttack();

	int physicalAttack();

	int rangeAttack();

	~Player();

private:
	std::string name;
	int strengthBonus;
	int magicBonus;
	int dextBonus;
};

class Warrior
{
public:
	Warrior();
	Warrior(std::string name, int level, int hpDice, std::string type, int strengthBonus, int magicBonus, int dextBonus);
	Warrior(Player p);
	~Warrior();

private:
	Player p;

};



#endif