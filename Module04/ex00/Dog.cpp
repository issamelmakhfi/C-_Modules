#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor Called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "HOA HOA HOA" << std::endl;
}