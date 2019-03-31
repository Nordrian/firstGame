#include "Inventory.h"

Inventory::Inventory()
{
}

void Inventory::addItem(Items * item)
{
	this->inventory.push_back(item);
}

void Inventory::scanInventory()
{
	

	for (iterInventory = this->inventory.begin(); iterInventory < inventory.end();iterInventory ++)
	{
		std::cout << (*iterInventory)->itemName() << std::endl;
	}
}

void Inventory::sortInventory()
{
	std::sort(this->inventory.begin(), this->inventory.end);
}

Inventory::~Inventory()
{
	for (iterInventory = inventory.begin(); iterInventory < inventory.end(); iterInventory++)
	{
		(*iterInventory) = NULL;
	}

}