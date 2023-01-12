#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	goko("Goko");
	ClapTrap	vijita("Vijita");

	goko.clapTrapStat();
	vijita.clapTrapStat();
	
	goko.attack(vijita.getName()); 						// goko lose 1 energy. damage increase +1.
	vijita.takeDamage(goko.getDamage());				// vijita lose 0 hitPt. damage decrease -1.

	vijita.beRepaired(1);								// vijita gain 1 hitPt & lose 1 energy.
	vijita.attack(goko.getName());						// vijita lose 1 energy. damage increase +1.
	goko.takeDamage(vijita.getDamage());				// goko lose 0 hitPt. damage decrease -1.

	goko.attack(vijita.getName());						// goko lose 1 energy. damage increase +1.
	vijita.takeDamage(goko.getDamage());				// vijita lose 1 hitPt. damage decrease -1.
	
	goko.clapTrapStat();
	vijita.clapTrapStat();
	
	return (0);
}
