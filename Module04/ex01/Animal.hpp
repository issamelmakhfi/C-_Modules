#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Animal
{
	public	:
		Animal ();
		Animal (Animal const &obj);
		virtual ~Animal ();
		Animal &operator= (const Animal &obj);

		std::string getType() const;
		virtual void makeSound() const
		{
			std::cout << "Hmmmmmm" << std::endl;
		}

	protected	:
		std::string type;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
