#ifndef _DiamondTrap_HPP_
#define _DiamondTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	DiamondTrap : public FragTrap , public ScavTrap
{
	public	:
		DiamondTrap (std::string _name);
		// DiamondTrap (DiamondTrap const &obj);
		~DiamondTrap ();
		DiamondTrap &operator= (const DiamondTrap &obj);

		// void whoAmI();

	private	:
		std::string _name;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
