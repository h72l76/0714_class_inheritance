// 0714_class_inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Auto.h"
#include "Ice.h"

int main()
{
	Auto a1{ "Chevy", "volt" };

	//std::cout << a1 << std::endl;

	// cannot access protected members from outside
	//auto s = a1._make; 

	Ice ice1{ "Ford", "focus", 4, 6 }; 

	ice1.Auto::print();

	ice1.print(); 



	//std::cout << ice1.getMake() << " " << ice1.getModel() << std::endl;

	// is-a 
	//std::cout << static_cast<Auto>(ice1) << std::endl;
	//std::cout << ice1 << std::endl;

}

