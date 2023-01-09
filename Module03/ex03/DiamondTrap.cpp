#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) : FragTrap(_name) , ScavTrap(_name), Name(_name)
{
	std::cout << "DiamondTrap : Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor Called" << std::endl;
}

// DiamondTrap::DiamondTrap(DiamondTrap const &obj) : ScavTrap(obj), FragTrap(obj)
// {
// 	std::cout << "Copy Constructor Called" << std::endl;
// 	if (this != &obj)
// 		*this = obj;
// }

DiamondTrap	&DiamondTrap::operator= (const DiamondTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}

// void DiamondTrap::whoAmI()
// {
// 	std::cout << "Im " << this->Name << ClapTrap_getName() << std::endl
// }
