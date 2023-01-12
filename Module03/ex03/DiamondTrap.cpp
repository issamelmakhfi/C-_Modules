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

void	DiamondTrap::attack(const std::string &target)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		std::cout << "zzzzzzzzzz i can't do this anymore, Repaire me!" << std::endl;
		return ;
	}
	if (this->Attack_damage < 20)
		this->Attack_damage++;
	this->Energy_points--;
	std::cout << "DiamondTrap " << _name << " attacks " << target << ", cousing " << Attack_damage << " points of damage!" << std::endl;
}
