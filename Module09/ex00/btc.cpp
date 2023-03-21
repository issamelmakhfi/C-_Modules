#include "btc.hpp"

btc::btc()
{
	// std::cout << "btc : Default Constructor Called" << std::endl;
}

btc::~btc()
{
	// std::cout << "btc : Destructor Called" << std::endl;
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

// btc::runtime_error::runtime_error(const std::string &what_arg)
// {
// 	std::cout << what_arg << std::endl;
// }

void	btc::parssFile(char *FileName)
{
	this->input.open(FileName, std::ios::in);
	this->data.open("data.csv", std::ios::in);
	if (!this->data || !this->input)
		throw std::runtime_error("FILE DOES NOT OPEN :_");
}

void	btc::readFromInput()
{
	std::string	str;
	std::string	substring;
	char	*token;
	struct tm tm;

	while (getline(this->input, str))
	{
		substring = str.substr(0, 4);
		this->year = atoi(substring.c_str());
		substring = str.substr(4, 1);
		this->dash += substring;
		substring = str.substr(5, 2);
		this->month = atoi(substring.c_str());
		substring = str.substr(7, 1);
		this->dash += substring;
		substring = str.substr(8);
		this->day = atoi(substring.c_str());
		token = strtok(&str[0], "|");
	}
}

void	btc::readFromFile()
{
	std::string	str;
	char	*token;
	char 	*tmp;

	while (getline(this->data, str))
	{
		token = strtok(&str[0], ",");
		tmp = token;
		token = strtok(NULL, ",");
		map[tmp] = token;
	}
	this->it = map.begin();
	// while (this->it != map.end())
	// {
	// 	std::cout << it->first << "," << it->second << std::endl;
	// 	++it;
	// }
}