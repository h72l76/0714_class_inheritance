#pragma once

#include <string>
#include <iostream>

class Auto
{
private: 
	bool _isFav{ false };
protected: 
	std::string _make; 
	std::string _model;
public: 
	std::string getMake() const; 
	std::string getModel() const; 

	Auto() = delete; 
	Auto(const std::string& make, const std::string& model);

	// will be modified to support polymorphism
	void print() const; 

	// operators are not inherited by child class, 
	// but child class object can be used as parent object type. (a child object is-a parent object)
	friend std::ostream& operator << (std::ostream& o, const Auto& automobile);
};

