#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>
#include <cmath>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Fixed
{
	public	:
		Fixed ();
		Fixed (const int value);
		Fixed (const float value);
		Fixed (Fixed const &obj);
		~Fixed ();
		int	toInt(void) const;
		float toFloat(void) const;
		Fixed &operator= (const Fixed &obj);
		int getRawBits(void) const;
		bool operator < (Fixed const &obj);
		bool operator > (Fixed const &obj);
		bool operator <= (Fixed const &obj);
		bool operator >= (Fixed const &obj);
		bool operator == (Fixed const &obj);
		bool operator != (Fixed const &obj);
		Fixed  operator + (Fixed const &obj);
		Fixed  operator - (Fixed const &obj);
		Fixed  operator * (Fixed const &obj);
		Fixed  operator / (Fixed const &obj);
		Fixed  operator ++ (int);
		Fixed  operator ++ (void);
		Fixed  operator -- (int);
		Fixed  operator -- (void);
		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);

	private	:
		int fixed_P;
		static const int fractional_bits = 8;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream &operator << (std::ostream &out, Fixed const &Fi);

#endif
