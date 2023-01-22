#include "MutantStack.hpp"

MutantStack::MutantStack()
{
	std::cout << "MutantStack : Default Constructor Called" << std::endl;
}

MutantStack::~MutantStack()
{
	std::cout << "MutantStack : Destructor Called" << std::endl;
}

MutantStack::MutantStack(MutantStack const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

MutantStack	&MutantStack::operator= (const MutantStack &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->c = obj.c;
	}
	return (*this);
}
