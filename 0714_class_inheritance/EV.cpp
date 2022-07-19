#include "EV.h"

EV::EV(const std::string make, const std::string model, double batteryCap, double range)
	: Auto{ make, model }, _batteryCap{ batteryCap }, _range{range}
{
}
