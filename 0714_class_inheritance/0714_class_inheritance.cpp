// 0714_class_inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Auto.h"
#include "Ice.h"
#include "EV.h"

int main()
{
	Auto a1{ "Chevy", "volt" };

	Ice ice1{ "Ford", "focus", 4, 6 }; 

	EV ev1{ "chevy", "blazer ev", 80, 280 };

	std::cout << "1. \n";
	a1.print();		// calling print function defined in Auto class 

	std::cout << "2. \n";
	ice1.Auto::print();		// calling print fucntion defined in Auto class, which is inherited by ICE class 

	std::cout << "3. \n";
	ice1.print();	// calling print function (re)defined in ICE class 

	std::cout << "4. \n";
	ev1.print();	// calling print function defined in Auto class, which is inherited by EV class
}

