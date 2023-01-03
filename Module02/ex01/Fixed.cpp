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
	// int tmp = f_value * 256;
	float tmp = f_value * 256;
	fixed_P = roundf(tmp);
	// std::cout << "-------" << fixed_P << std::endl;
	// float tmp = toInt();
	// std::cout << "-------" <<f_value << std::endl;
	// std::cout << "______" << tmp << std::endl;
	// std::cout << "______" << tmp / 256 << std::endl;
	// exit(0);
	// std::cout << tmp << std::endl;
	std::cout << "Fixed : Float Default Constructor Called" << std::endl;
	// fixed_P = f_value;
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
	{
		//	this->attributes = obj.attributes;
		this->fixed_P = obj.fixed_P;
	}
	return (*this);
}

int Fixed::toInt(void) const
{
	return (fixed_P / 256);
}

float	Fixed::toFloat(void) const
{
	// int tmp = toInt
	float res = (float)fixed_P / 256;
	return (res);
}
