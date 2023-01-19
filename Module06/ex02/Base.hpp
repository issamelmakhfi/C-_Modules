#ifndef _Base_HPP_
#define _Base_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Base
{
	public	:
		virtual ~Base ();

	private	:
		//	DataType	attributes.
};

Base * generate(void);
void	identify(Base *p);
void	identify(Base &p);

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
