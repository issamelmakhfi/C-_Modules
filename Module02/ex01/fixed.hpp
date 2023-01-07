#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Fixed
{
	public	:
		Fixed ();
		Fixed(int value);
		Fixed(const float f_value);
		Fixed (Fixed const &obj);
		~Fixed ();
		Fixed &operator= (const Fixed &obj);
		int toInt(void) const;
		float toFloat(void) const;

	private	:
		int	fixed_P;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
