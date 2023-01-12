#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Default Constructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}