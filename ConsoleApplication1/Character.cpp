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

std::string generalCharacter::saveData()
{
	std::string data = std::to_string(this->hpDice) + " " +
		std::to_string(this->level) + " " +
		std::to_string(this->hp) + " " +
		std::to_string(this->physicalDef) + " " +
		std::to_string(this->magicalDef) + " " +
		std::to_string(this->dodgeSkill);
	return data;
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

Player::Player(std::string name, int level, int hpDice, std::string type, int strengthBonus, int magicBonus, int dextBonus, classType charClass) : generalCharacter(type, level, hpDice)
{
	this->dextBonus = dextBonus;
	this->strengthBonus = strengthBonus;
	this->magicBonus = magicBonus;
	this->name = name;
	this->myClass = characterClass(charClass);
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

std::string Player::saveData()
{
	std::string characterData = "1 " + std::to_string(this->myClass.getClass()) + " " + std::to_string(this->strengthBonus)+
		std::to_string(this->magicBonus) + " " +
		std::to_string(this->dextBonus) + " " +
		generalCharacter::saveData() + equipment.saveEquipment();
	return characterData;
}

Player::~Player() {

}

//Defining warrior class


characterClass::characterClass(classType charClass)
{
	this->myClass = charClass;
}

characterClass::~characterClass()
{
}

int& characterClass::getClass()
{

	switch (this->myClass) {
	case classType::WARRIOR: return 0;
		break;
	case classType::MAGE: return 1;
		break;
	case classType::ROGUE: return 2;
	}
}
