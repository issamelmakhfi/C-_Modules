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
		int	getDamage(void);
		std::string ClapTrap_getName(void);
		void clapTrapStat();

	protected :
		std::string Name;
		int 		Hit_points;
		int 		Energy_points;
		int			Attack_damage;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
