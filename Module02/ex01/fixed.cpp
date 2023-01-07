#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed : Default Constructor Called" << std::endl;
	fixed_P = 0;
}

Fixed::Fixed(const int value)
{
	(void)value;
	std::cout << "Fixed : Int Default Constructor Called" << std::endl;
}

Fixed::Fixed(const float f_value)
{
	(void)f_value;
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
	{
		this->fixed_P = obj.fixed_P;
	}
	return (*this);
}

int	Fixed::toInt(void) const
{
	int to_int;
	to_int = fixed_P / 256;
	return (fixed_P);
}
