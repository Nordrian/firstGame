#include "Inventory.h"

Inventory::Inventory()
{
}

void Inventory::addItem(std::unique_ptr<Items> item)
{
	this->inventory.push_back(std::move(item));
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
	compareItems compareThem;
	std::sort(this->inventory.begin(), this->inventory.end(), compareThem);
}

Inventory::~Inventory()
{

}