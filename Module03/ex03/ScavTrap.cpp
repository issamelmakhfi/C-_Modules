#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap : Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap : Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap	&ScavTrap::operator= (const ScavTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->Name = obj.Name;
		this->Attack_damage = obj.Attack_damage;
		this->Energy_points = obj.Energy_points;
		this->Hit_points = obj.Hit_points;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		std::cout << "zzzzzzzzzz i can't do this anymore, Repaire me!" << std::endl;
		return ;
	}
	if (this->Attack_damage < 20)
		this->Attack_damage++;
	this->Energy_points--;
	std::cout << "ScavTrap " << Name << " attacks " << target << ", cousing " << Attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now Gate Keeper mode." << std::endl;
}
