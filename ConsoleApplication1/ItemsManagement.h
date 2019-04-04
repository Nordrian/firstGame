#pragma once
#ifndef ITEMS_H

#include <string>
#include "dice.h"
#include <memory>
#include <iostream>


class Items
{
public:
	Items(std::string name, int value, int id) : name(name), value(value), itemID(id) {};
	~Items();
	const std::string& itemName();

	bool operator<(const Items & item);
	
	const int checkPrice() const;

	virtual int dmg();


private:
	const std::string name;
	const int itemID;
	int value;
};

enum weaponType {melee, range};
enum dmgModifier { strength, dexterity, magic };

class Weapons : public Items
{
public:
	Weapons(std::string name, int value, weaponType type, dmgModifier dmgType, int dices = 6, int numberOfDices = 1) : Items(name, value), type(type),
	dmgType(dmgType), diceType(dices), numberOfDices(numberOfDices){};
	~Weapons();
	int dmg();

private:
	weaponType type;
	dmgModifier dmgType;
	int diceType;
	int numberOfDices;

};


struct compareItems {

	bool operator() (const std::unique_ptr<Items>& item_1, const std::unique_ptr<Items>& item_2) const
	{
		return item_1->itemName() < item_2->itemName();

	}
};

#endif // !ITEMS_H