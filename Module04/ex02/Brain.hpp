#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Brain
{
	public	:
		Brain ();
		Brain (Brain const &obj);
		~Brain ();
		Brain &operator= (const Brain &obj);

	private	:
		std::string ideas[100];
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
