#pragma once
#ifndef INVENTORY_H

#include <vector>
#include <algorithm>
#include <iterator>
#include "ItemsManagement.h"
#include <iostream>
#include <cstdio>
#include <memory>

class Inventory {
public:
	Inventory();
	~Inventory();
	void addItem(std::unique_ptr<Items> item);
	void scanInventory();
	void sortInventory();
	

private:
	std::vector<std::unique_ptr<Items>> inventory;
	std::vector<std::unique_ptr<Items>>::iterator iterInventory;
};
#endif // !INVENTORY_H
