#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>
#include <math.h>

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
		friend std::ostream & operator << (std::ostream &out,  Fixed &c)
		{
			out << c.fixed_P;
			return out;
		}


	private	:
		int	fixed_P;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
