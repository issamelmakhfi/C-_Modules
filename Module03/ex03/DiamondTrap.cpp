#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
	this->_name = _name;
	std::cout << "DiamondTrap : Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

DiamondTrap	&DiamondTrap::operator= (const DiamondTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->Attack_damage = obj.Attack_damage;
		this->Energy_points = obj.Energy_points;
		this->Hit_points = obj.Hit_points;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name : " << this->_name << "  ClapTrap Name : " << this->Name << std::endl;
}
