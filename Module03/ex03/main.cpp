#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ScavTrap	vegeta("Vegeta");
	FragTrap	goko("Goko");
	DiamondTrap	zeno("Zeno");
	
	vegeta.clapTrapStat();
	goko.clapTrapStat();
	zeno.clapTrapStat();
	
	zeno.attack(vegeta.getName());
	vegeta.takeDamage(zeno.getDamage());

	zeno.attack(goko.getName());
	goko.takeDamage(zeno.getDamage());

	vegeta.attack(zeno.getName());
	zeno.takeDamage(vegeta.getDamage());
	goko.attack(zeno.getName());
	zeno.takeDamage(goko.getDamage());

	zeno.whoAmI();
	zeno.guardGate();
	zeno.highFivesGuys();
	zeno.clapTrapStat();
	vegeta.clapTrapStat();
	return (0);
}
