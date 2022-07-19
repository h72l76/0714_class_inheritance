#pragma once
#include "Auto.h"
#include <iostream>

class Ice : public Auto {
protected: 
	int _numCylinders{ 4 }; 
	int _numGears{ 8 }; 
public: 
	Ice() = delete; 
	Ice(const std::string& make, const std::string& model, int numCylinders, int numGears); 

	// override print function here
	void print() const override;

	friend std::ostream& operator << (std::ostream& o, const Ice& ice); 
};

