#include "Items.h"

Items::Items(std::string name, int value)
{
	this->value = value;
	this->name = name;
}

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

 const int const Items::checkPrice() const
{
	return this->value;
}
