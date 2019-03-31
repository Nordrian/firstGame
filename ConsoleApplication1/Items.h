#pragma once
#ifndef ITEMS_H

#include <string>

class Items
{
public:
	Items(std::string name, int value);
	~Items();
	const std::string& itemName();

	bool operator<(const Items & item);
	
	const int checkPrice() const;


private:
	std::string name;
	int value;
};

class Weapon : public


#endif // !ITEMS_H