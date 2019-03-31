#ifndef DICE_H
#include "dice.h"
#endif

#ifndef PCH_H
#include "pch.h"
#endif // !PCH_H


#include <iostream>
#include <cstdlib>
#include "Character.h"
#include "Inventory.h"


int main()
{
	generalCharacter tom = generalCharacter("tom", 6, 6);


	Items sword("Sword", 10);
	Items boots("Worn Boots", 2);
	Items armor("Armor", 100);
	Items hat("Pointy Hat", 10);

	Inventory myInventory;

	myInventory.addItem(&sword);
	myInventory.addItem(&boots);
	myInventory.addItem(&armor);
	myInventory.addItem(&hat);
	myInventory.scanInventory();

	

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
