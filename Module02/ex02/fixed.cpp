#include "fixed.hpp"

fixed::fixed()
{
	std::cout << "fixed : Default Constructor Called" << std::endl;
}

fixed::~fixed()
{
	std::cout << "fixed : Destructor Called" << std::endl;
}

fixed::fixed(fixed const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

fixed	&fixed::operator= (const fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
