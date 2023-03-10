#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//lllll
	}
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "MEOOOOOOOO" << std::endl;
}
