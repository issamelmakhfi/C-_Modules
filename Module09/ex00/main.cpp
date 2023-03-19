#include "btc.hpp"

int main(int ac, char **av)
{
	btc btc;

	if (ac != 2)
		btc.errorHandler("Error: could not open file.");
	btc.parssFile(av[1]);
	btc.readFromFile();


	return (0);
}
