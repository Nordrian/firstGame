#include "Character.h"




generalCharacter::generalCharacter()
{

}

generalCharacter::generalCharacter(std::string type, int level, int hpDice, Inventory& inventory)
{
	this->type = type;
	this->level = level;
	this->hpDice = hpDice;
	this->equipment = inventory;

	this->hp = 0;
	for (int i = 1; i <= level; i++)
	{
		this->hp += randomValue(this->hpDice);
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

void generalCharacter::getsHit(int dmg) {
	this->hp -= dmg;
}

generalCharacter::~generalCharacter()
{

}

//Defining Player class

Player::Player() {
	this->name = "Unknown";
	this->strengthBonus = 0;
	this->dextBonus = 0;
	this->magicBonus = 0;



}

Player::Player(std::string name, int level, int hpDice, std::string type, int strengthBonus, int magicBonus, int dextBonus) : generalCharacter(type, level, hpDice)
{
	this->dextBonus = dextBonus;
	this->strengthBonus = strengthBonus;
	this->magicBonus = magicBonus;
	this->name = name;
}



int Player::magicAttack() {
	return randomValue(6) + this->magicBonus;
}

int Player::physicalAttack() {
	return randomValue(6) + this->strengthBonus;
}

int Player::rangeAttack() {
	return randomValue(6) + this->dextBonus;
}

Player::~Player() {

}

//Defining warrior class

Warrior::Warrior()
{
}

Warrior::Warrior(std::string name, int level, int hpDice, std::string type, int strengthBonus, int magicBonus, int dextBonus)
{
	Player p(name, 1, 10, "human", 2, 0, 0);
	this->p = p;
}

Warrior::Warrior(Player p)
{
	this->p = p;
}

Warrior::~Warrior()
{
}