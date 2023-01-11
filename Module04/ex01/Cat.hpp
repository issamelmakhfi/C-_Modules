#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cat : public Animal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		Cat (Cat &obj)
		{
			ptr = new Brain;
			*ptr = *(obj.ptr);
		}
		 ~Cat ();
		Cat &operator= (const Cat &obj);

		// using Animal::makeSound;
		void makeSound() const;

	private	:
		Brain* ptr;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif