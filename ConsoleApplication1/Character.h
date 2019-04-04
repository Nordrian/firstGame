#ifndef CHARACTER_H
	#include "dice.h"


#include <cstdio>

#include <string>
#include <thread>
#include <chrono>
#include "Inventory.h"

enum class classType { WARRIOR, MAGE, ROGUE };



class generalCharacter
{
public:
	generalCharacter();

	generalCharacter(std::string type, int level, int hpDice, Inventory& inventory);

	~generalCharacter();

	void getsHit(int dmg);
	virtual std::string saveData();


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

	Player(std::string name, int level, int hpDice, std::string type, int strengthBonus, int magicBonus, int dextBonus, classType charClass = classType::WARRIOR);

	int magicAttack();

	int physicalAttack();

	int rangeAttack();

	virtual std::string saveData();

	~Player();

private:
	std::string name;
	int strengthBonus;
	int magicBonus;
	int dextBonus;
	characterClass myClass;
};

class characterClass
{
public:

	characterClass(classType charClass = classType::WARRIOR);
	~characterClass();
	int& getClass();

	
private:

		classType myClass;

};



#endif