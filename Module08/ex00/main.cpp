#include "easy.hpp"
#include <vector>
#include <exception>

int main()
{
	std::vector<int> ar;
	int a;

	ar.push_back(1);
	ar.push_back(3);
	ar.push_back(2);


	try {
		a = easyfind(ar , 2);
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
