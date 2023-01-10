#ifndef _ScavTrap_HPP_
#define _ScavTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ScavTrap : virtual public ClapTrap
{
	public	:
		ScavTrap ();
		ScavTrap (std::string Name);
		ScavTrap (ScavTrap const &obj);
		~ScavTrap ();
		ScavTrap &operator= (const ScavTrap &obj);

		// void	attack(std::string const &target);
		void 	guardGate();

	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
