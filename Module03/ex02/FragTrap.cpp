#include "FragTrap.hpp"

// FragTrap::FragTrap()
// {
// 	std::cout << "FragTrap : Default Constructor Called" << std::endl;
// }

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap : Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap	&FragTrap::operator= (const FragTrap &obj)
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

void	FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVES GUYS :) "<< std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		std::cout << "zzzzzzzzzz i can't do this anymore, Repaire me!" << std::endl;
		return ;
	}
	if (this->Attack_damage < 20)
		this->Attack_damage++;
	this->Energy_points--;
	std::cout << "FragTrap " << Name << " attacks " << target << ", cousing " << Attack_damage << " points of damage!" << std::endl;
}
