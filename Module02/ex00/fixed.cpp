#include "fixed.hpp"

fixed::fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
    fixed_P = 0;
}

fixed::~fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

fixed::fixed(fixed const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj
}

fixed	&fixed::operator= (const fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
    this->fixed_P = obj.getRawBits();
	return (*this);
}

int fixed::getRawBits(void) const
{
    std::cout << "getRawbits member function called" << std::endl;
    return (fixed_P);
}

void    fixed::setRawbits(int const raw)
{
    fixed_P = raw;
}



