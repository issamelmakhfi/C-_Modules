#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal	&Animal::operator= (const Animal &obj)
{
	std::cout << "Animal : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}


std::string Animal::getType() const
{
	return (this->type);
}