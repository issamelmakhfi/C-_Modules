#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed : Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Fixed : Int Default Constructor Called" << std::endl;
	fixed_P = value * 256;
}

Fixed::Fixed(const float f_value)
{
	float tmp = f_value * 256;
	fixed_P = roundf(tmp);
	std::cout << "Fixed : Float Default Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed : Destructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Fixed	&Fixed::operator= (const Fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->fixed_P = obj.fixed_P;
	return (*this);
}

int Fixed::toInt(void) const
{
	return (fixed_P / 256);
}

float	Fixed::toFloat(void) const
{
	float res = (float)fixed_P / 256;
	return (res);
}
