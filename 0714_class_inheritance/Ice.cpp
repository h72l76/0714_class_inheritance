#include "Ice.h"

Ice::Ice(const std::string& make, const std::string& model, int numCylinders, int numGears)
	: Auto(make, model), _numCylinders{ numCylinders }, _numGears{numGears}
{
}

void Ice::print() const
{	
	//std::cout << "printing from ICE class: " << std::endl;
	//Auto::print();		// make sure to have Auto:: scope to prevent accidental recursion
	//std::cout << "num of cylinders: " << _numCylinders << std::endl;
	//std::cout << "num of gears: " << _numGears << std::endl;

	std::cout << "Printing from ICE class: \n";
	std::cout << "ICE make: " << _make << "\n"; 
	std::cout << "ICE model: " << _model<< "\n"; 
	std::cout << "ICE num of cylinders: " << _numCylinders << std::endl;
	std::cout << "ICE num of gears: " << _numGears << std::endl << std::endl;

}

std::ostream& operator<<(std::ostream& o, const Ice& ice)
{
	// TODO: insert return statement here
	o << "make: " << ice._make; 
	o << " model: " << ice._model;
	o << " num of cylinder: " << ice._numCylinders; 
	o << " num of gears: " << ice._numGears;

	//o << static_cast<Auto> (ice);

	return o; 
}
