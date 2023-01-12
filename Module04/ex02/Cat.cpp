#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default Constructor Called" << std::endl;
	this->type = "Cat";
	ptr = new Brain;
}

Cat::~Cat()
{

	std::cout << "Cat : Destructor Called" << std::endl;
	delete ptr;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
	{
		this->ptr = new Brain;
		*ptr = *(obj.ptr);
	}
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << " Cat :Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.getType();
		this->ptr = new Brain;
		*(this->ptr) = *(obj.ptr);
	}
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "MEOOOOOOOO" << std::endl;
}
