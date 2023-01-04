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
		Fixed (const float f_value);
		Fixed (Fixed const &obj);
		~Fixed ();
		Fixed &operator= (const Fixed &obj);
		int	toInt(void) const;
		float	toFloat(void) const;
		friend std::ostream & operator<< (std::ostream &out,  Fixed const &c)
		{
			out << c.toFloat();
			return out;
		}


	private	:
		int	fixed_P;
		int fractional_bits = 8;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
