#include "btc.hpp"

btc::btc()
{
	std::cout << "btc : Default Constructor Called" << std::endl;
}

btc::~btc()
{
	std::cout << "btc : Destructor Called" << std::endl;
}

btc::btc(btc const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

btc	&btc::operator= (const btc &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}


void	btc::parssFile(char *FileName)
{
	this->data.open(FileName, std::ios::in);
	if (!this->data)
		errorHandler("FILE DOES NOT OPEN");
}

void	btc::errorHandler(std::string mssg)
{
	std::cout << mssg << std::endl;
	exit(1);
}

void	btc::readFromFile()
{
	std::string	test;

	while (getline(this->data, test))
		std::cout << test << std::endl;
}