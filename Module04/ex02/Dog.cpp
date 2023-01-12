#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default Constructor Called" << std::endl;
	this->type = "Dog";
	ptr1 = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor Called" << std::endl;
	delete ptr1;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
	{
		this->ptr1 = new Brain;
		*(this->ptr1) = *(obj.ptr1);
	}
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Dog :Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->ptr1 = new Brain;
		*(this->ptr1) = *(obj.ptr1);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "HOA HOA HOA" << std::endl;
}