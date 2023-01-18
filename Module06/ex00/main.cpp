#include "convert.hpp"

int main(int ac, char **av)
{
	
	try {
		if (ac != 2)
			throw "Bad Arguments :(";
		convert arg(av[1]);
		arg.parssArg();
	}
	catch (char const *mssg)
	{
		std::cout << mssg << std::endl;
	}

	return (0);
}
