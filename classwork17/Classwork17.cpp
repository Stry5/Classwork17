// Classwork17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linSearch.h"

int main()
{
	//variables
	int querey = 5;
	int database[10] = { 50,1,2,6,48,1347,5,1235,127,17 };

	std::cout << linSearch(database, 10, querey);

}

