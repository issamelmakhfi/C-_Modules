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

void	btc::parssFile(char *FileName)
{
	this->input.open(FileName, std::ios::in);
	this->data.open("data.csv", std::ios::in);
	if (!this->data || !this->input)
		throw std::runtime_error("FILE DOES NOT OPEN :_");
	btc::readFromFile();
	btc::readFromInput();
}

void	btc::readFromInput()
{
	std::string	str;

	while (getline(this->input, str))
	{
		this->year = str.substr(0, 4);
		this->dash += str.substr(4, 1);
		this->month = str.substr(5, 2);
		this->dash += str.substr(7, 1);
		this->day = str.substr(8);
		btc::parssYear(this->year);
		btc::parssMonth(this->month);
		btc::parssDay();
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

void	btc::parssYear(std::string year)
{
	if (!std::all_of(year.begin(), year.end(), ::isdigit) || atoi(year.c_str()) < 2009)
		throw std::runtime_error ("ERROR: DATE NOT VALID-");
}

void	btc::parssMonth(std::string month)
{
	if (!std::all_of(month.begin(), month.end(), ::isdigit) || atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		throw std::runtime_error("ERROR: DATE NOT VALID6");
}

void	btc::parssDay()
{
	this->day = day.substr(0, 2);
	if (!std::all_of(this->day.begin(), this->day.end(), ::isdigit))
		throw std::runtime_error("ERROR:DATE NOT VALID0");
	if (atoi(month.c_str()) >= 1 && atoi(month.c_str()) < 8 && atoi(month.c_str()) % 2 == 0)
	{
		if (atoi(this->day.c_str()) < 1 || atoi(this->day.c_str()) > 30)
			throw std::runtime_error("ERROR: DATE NOT VALID1");
	}
	else
	{
		if (atoi(this->day.c_str()) < 1 || atoi(this->day.c_str()) > 31)
			throw std::runtime_error("ERROR: DATE NOT VALID1");
	}
	if (atoi(this->year.c_str()) % 4 != 0 || (atoi(this->year.c_str()) % 100 == 0 && atoi(this->year.c_str()) % 400 != 0))
	{
		if (atoi(this->month.c_str()) == 02)
		{
			if (atoi(this->day.c_str()) < 1 ||  atoi(this->day.c_str()) > 28)
				throw std::runtime_error("ERROR: DATE NOT VALID1");
		}
	}
	else
	{
		if (atoi(this->month.c_str()) == 02)
		{
			if (atoi(this->day.c_str()) < 1 ||  atoi(this->day.c_str()) > 29)
				throw std::runtime_error("ERROR: DATE NOT VALID1");
		}
	}
}