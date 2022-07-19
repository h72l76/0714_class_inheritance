#include "Auto.h"

std::string Auto::getMake() const
{
    return _make;
}

std::string Auto::getModel() const
{
    return _model;
}

Auto::Auto(const std::string& make, const std::string& model)
    : _make{ make }, _model{model}
{
}

void Auto::print() const
{
    std::cout << "printing auto: " << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "make: " << _make << std::endl;
    std::cout << "model: " << _model<< std::endl;
    std::cout << "============================" << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Auto& automobile)
{
    // TODO: insert return statement here
    o << "make: " << automobile._make 
        << " " << "model: " << automobile._model; 

    return o;
}
