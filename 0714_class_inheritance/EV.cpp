#include "EV.h"
#include <iostream>

EV::EV(const std::string make, const std::string model, double batteryCap, double range)
	: Auto{ make, model }, _batteryCap{ batteryCap }, _range{range}
{
}

void EV::print() const
{
	std::cout << "Printing an EV: \n";
	std::cout << "EV make: " << _make << "\n"; 
	std::cout << "EV model: " << _model<< "\n"; 
	std::cout << "EV battery cap: " << _batteryCap<< "\n"; 
	std::cout << "EV range: " << _range<< "\n\n"; 
}
