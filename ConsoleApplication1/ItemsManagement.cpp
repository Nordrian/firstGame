#include "ItemsManagement.h"


Items::~Items()
{
}

const std::string& Items::itemName()
{
	return this->name;
}

bool Items::operator< (const Items& item)
{
	const int x = item.checkPrice();


	return this->value<x;
}

 const int Items::checkPrice() const
{
	return this->value;
}

 int Items::dmg()
 {
	 return -1;
 }

 // Defining a weapon, that inherits from Items

 Weapons::~Weapons()
 {

 }

 int Weapons::dmg()
 {
	 int total = 0;

	 for (int i = 0; i < numberOfDices; i++)
		 total += randomValue(diceType);

	 return total;
 }
