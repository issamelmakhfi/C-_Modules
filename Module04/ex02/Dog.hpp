#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Dog : public Animal
{
	public	:
		Dog ();
		// Dog (Dog const &obj);
		~Dog ();
		// Dog &operator= (const Dog &obj);

		void makeSound () const ;

	private	:
		Brain *ptr1;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
