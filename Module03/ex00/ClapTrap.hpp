#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ClapTrap
{
	public	:
		ClapTrap (std::string Name);
		ClapTrap (ClapTrap const &obj);
		~ClapTrap ();
		ClapTrap &operator= (const ClapTrap &obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void getname(void)
		{
			std::cout << Name << std::endl;
		}

	private	:
		std::string Name;
		int Hit_points = 10;
		int Energy_points = 10;
		int Attack_damage = 0;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
