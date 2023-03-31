#include "btc.hpp"

int main(int ac, char **av)
{
	btc btc;

	try {
		if (ac != 2)
			throw std::runtime_error("Error: could not open file.");
		std::cout << std::fixed << std::setprecision(2);
		btc.parssFile(av[1]);
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
