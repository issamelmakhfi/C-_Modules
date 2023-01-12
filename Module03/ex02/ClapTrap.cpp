#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap : Default Constructor Called" << std::endl;
	this->Name = Name;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &obj)
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

void	ClapTrap::attack(const std::string &target)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		std::cout << "zzzzzzzzzz i can't do this anymore, Repaire me!" << std::endl;
		return ;
	}
	if (this->Attack_damage < 20)
		this->Attack_damage++;
	this->Energy_points--;
	std::cout << "ClapTrap " << Name << " attacks " << target << ", cousing " << Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		std::cout << "Enough he's dead :)" << std::endl;
		return ;
	}
	else
	{
		this->Hit_points = this->Hit_points - amount;
		std::cout << "ClapTrap " << Name << " get attacked, losing " << amount << " points from Hit points!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_points < 10)
	{
		this->Hit_points = this->Hit_points + amount;
		this->Energy_points--;
		std::cout << "ClapTrap repairs itself, it gets " << amount << " hit points back" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " had enough Hit points!" << std::endl;
}

void ClapTrap::clapTrapStat()
{
	std::cout << "\33[0;32mName\33[0m          : " << "\33[0;31m" <<this->getName() << "\33[0m" << std::endl;
	std::cout << "Hit points    : " << this->Hit_points<< std::endl;
	std::cout << "Energy points : " << this->Energy_points << std::endl;
	std::cout << "Attack damage : " << this->Attack_damage << std::endl;
}

std::string ClapTrap::getName(void)
{
	return (this->Name);
}

int	ClapTrap::getDamage(void)
{
	return (this->Attack_damage);
}