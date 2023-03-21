#include "btc.hpp"

int main(int ac, char **av)
{
	try {
		btc btc;

		if (ac != 2)
			throw std::runtime_error("Error: could not open file.");
		btc.parssFile(av[1]);
		btc.readFromFile();
		btc.readFromInput();
	}
	catch(std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}
