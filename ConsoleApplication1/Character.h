#ifndef DICE_H
	#include "dice.h"
#endif

#include <cstdio>

#include <string>
#include <thread>
#include <chrono>
#ifndef CHARACTER_H
#define CHARACTER_H

class generalCharacter
{
public:
	generalCharacter();

	generalCharacter(std::string type, int level, int hpDice);

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