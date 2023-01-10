#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	FragTrap : virtual public ClapTrap
{
	public	:
		FragTrap ();
		FragTrap (std::string Name);
		FragTrap (FragTrap const &obj);
		~FragTrap ();
		FragTrap &operator= (const FragTrap &obj);

		void highFivesGuys(void);
		// void attack(std::string const &target);

	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
