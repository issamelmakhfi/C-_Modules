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
		Fixed (Fixed const &obj);
		~Fixed ();
		Fixed &operator= (const Fixed &obj);
		int 	getRawBits(void) const;
		void	setRawBits(int const Raw);

	private	:
		int	Fixed_p;
		static const int fractional_bits = 8;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif