#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_P = 0 * pow(2, fractional_bits);
}

Fixed::Fixed(int const value)
{
	fixed_P = value * pow(2, fractional_bits);
}

Fixed::Fixed(float const value)
{
	float tmp = value * pow(2, fractional_bits);
	fixed_P = roundf(tmp);
}

Fixed::~Fixed()
{
	// std::cout << "Fixed : Destructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
	if (this != &obj)
		*this = obj;
}

int Fixed::toInt(void) const
{
	return (fixed_P / pow(2, fractional_bits));
}

float	Fixed::toFloat(void) const
{
	float res = (float)fixed_P / pow(2, fractional_bits);
	return (res);
}

Fixed	&Fixed::operator= (const Fixed &obj)
{
	if (this != &obj)
		this->fixed_P = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (fixed_P);
}

//////////////////////// Comparaison ////////////////////////

bool Fixed::operator < (Fixed const &obj)
{
	return (this->fixed_P < obj.fixed_P);
}

bool Fixed::operator > (Fixed const &obj)
{
	return (this->fixed_P > obj.fixed_P);
}

bool Fixed::operator <= (Fixed const &obj)
{
	return (this->fixed_P <= obj.fixed_P);
}

bool Fixed::operator >= (Fixed const &obj)
{
	return (this->fixed_P >= obj.fixed_P);
}

bool Fixed::operator == (Fixed const &obj)
{
	return (this->fixed_P == obj.fixed_P);
}

bool Fixed::operator != (Fixed const &obj)
{
	return (this->fixed_P != obj.fixed_P);
}

/////////////////////////////  Arithmetic operators ///////////////////////////

Fixed Fixed::operator + (Fixed const &obj)
{
	return (Fixed((this->fixed_P / (float)256) + (obj.fixed_P / (float)256)));
}

Fixed Fixed::operator - (Fixed const &obj)
{
	return (Fixed((this->fixed_P / (float)256) - (obj.fixed_P / (float)256)));
}

Fixed Fixed::operator * (Fixed const &obj)
{
	return (Fixed((this->fixed_P / (float)256) * (obj.fixed_P / (float)256)));
}

Fixed Fixed::operator / (Fixed const &obj)
{
	return (Fixed((this->fixed_P / (float)256) / (obj.fixed_P / (float)256)));
}

///////////////////////////////  increment/decrement ////////////////////////////

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);

	this->fixed_P++;
	return (tmp);
}

Fixed Fixed::operator ++ (void)
{
	this->fixed_P++;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);

	this->fixed_P--;
	return (tmp);
}

Fixed Fixed::operator -- (void)
{
	this->fixed_P--;
	return (*this);
}

///////////////////////////////// min && max /////////////////////////////

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.fixed_P > f2.fixed_P)
		return (f2);
	return (f1);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.fixed_P < f2.fixed_P)
		return (f2);
	return (f1);
}
//////////////////////////////// << operator ////////////////////////////

std::ostream &operator << (std::ostream &out, Fixed const &Fi)
{
	out << Fi.toFloat();
	return (out);
}
