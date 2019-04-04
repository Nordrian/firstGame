#ifndef DICE_H
#include "dice.h"
#endif

#ifndef PCH_H
#include "pch.h"
#endif // !PCH_H


#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Character.h"
#include "Inventory.h"


int main()
{
	int choice = 0;



	Inventory myInventory;

	myInventory.addItem(std::unique_ptr<Items>(new Items("Sword",10)));
	myInventory.addItem(std::unique_ptr<Items>(new Items("Worn Boots", 10)));
	myInventory.addItem(std::unique_ptr<Items>(new Items("Sword", 10)));
	myInventory.addItem(std::unique_ptr<Items>(new Items("Sword", 10)));
	myInventory.scanInventory();

	std::cout << "What do you want to attack with?";

	std::ofstream saveFile("data.txt");



	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
