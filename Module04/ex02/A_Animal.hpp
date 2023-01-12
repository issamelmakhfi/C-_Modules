#ifndef _A_Animal_HPP_
#define _A_Animal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	A_Animal
{
	public	:
		A_Animal ();
		A_Animal (A_Animal const &obj);
		virtual ~A_Animal () = 0;
		A_Animal &operator= (const A_Animal &obj);

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected	:
		std::string type;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
