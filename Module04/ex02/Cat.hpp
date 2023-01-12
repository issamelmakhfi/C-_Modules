#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "A_Animal.hpp"
#include "Brain.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cat : public A_Animal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		~Cat ();
		Cat &operator= (const Cat &obj);

		void makeSound() const;

	private	:
		Brain* ptr;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif