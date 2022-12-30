#include "fixed.hpp"


fixed::fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	fixed_P = 0;
}

// fixed::fixed(const int num)
// {
// 	std::cout << "Int : Default Constructor Called" << std::endl;
// 	fixed_P = num;
// }

// fixed::fixed(const float f_num)
// {
// 	std::cout << "Float : Default Constructor Called" << std::endl;
// 	fixed_P = f_num;
// }

fixed::~fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

fixed::fixed(fixed const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	fixed_P = obj.fixed_P;
}

fixed	&fixed::operator= (const fixed &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	this->fixed_P = obj.fixed_P;
	return (*this);
}
