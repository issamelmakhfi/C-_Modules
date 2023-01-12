#include "A_Animal.hpp"

A_Animal::A_Animal()
{
	std::cout << "A_Animal : Default Constructor Called" << std::endl;
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal : Default Destructor Called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

A_Animal	&A_Animal::operator= (const A_Animal &obj)
{
	std::cout << "A_Animal : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->type = obj.getType();
	return (*this);
}

std::string A_Animal::getType() const
{
	return (this->type);
}