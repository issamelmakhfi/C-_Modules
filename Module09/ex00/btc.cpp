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
	this->input.open(FileName, std::ios::in);
	this->data.open("data.csv", std::ios::in);
	if (!this->data || !this->input)
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
	char	*token;
	char	*tmp;
	struct tm tm;

	while (getline(this->input, test))
	{
		token = strtok(&test[0], "|");
		tmp = token;
		std::cout << tmp << std::endl;
		if (!strptime(tmp, "%Y-%m-%d ", &tm))
			std::cout << "HHHHHH" << std::endl;
		token = strtok(NULL, "|");
		map[tmp] = token;
		// std::cout << tmp << "|" << token << std::endl;
	}
}