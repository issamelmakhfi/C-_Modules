#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}
