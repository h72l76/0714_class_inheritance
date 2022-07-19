#pragma once
#include "Auto.h"
class EV : public Auto
{
protected:
    double _batteryCap{ 60 }; 
    double _range{ 250 }; 
public: 
    EV() = delete; 
    EV(const std::string make, const std::string model, double batteryCap, double range);

    // OVERRIDE print function
    // void print() const
};

