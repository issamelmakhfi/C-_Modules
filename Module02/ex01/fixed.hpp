#ifndef _fixed_HPP_
#define _fixed_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	fixed
{
	public	:
		fixed();
		// fixed (const int num);
		// fixed (const float f_num);
		fixed (fixed const &obj);
		~fixed ();
		fixed &operator= (const fixed &obj);
		float	toFloat(void) const;
		int		toInt(void) const;

	private	:
		int fixed_P;
		// static const int bits = 8;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
