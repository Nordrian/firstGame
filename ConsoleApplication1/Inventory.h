#pragma once
#ifndef INVENTORY_H

#include <vector>
#include <algorithm>
#include <iterator>
#include "items.h"
#include <iostream>
#include <cstdio>

class Inventory {
public:
	Inventory();
	void addItem(Items* item);
	void scanInventory();
	void sortInventory();
	~Inventory();

private:
	std::vector<Items*> inventory;
	std::vector<Items*>::iterator iterInventory;
};
#endif // !INVENTORY_H
