#include "convert.hpp"

convert::convert(char *av)
{
	std::cout << "convert : Default Constructor Called" << std::endl;
	this->str = av;
}

bool	convert::is_digit()
{
	std::string tmp;

	tmp = this->str;
	if (checkSign() == true)
		tmp.erase(0, 1);
	return (tmp.find_first_not_of("0123456789") == std::string::npos);
}

bool	convert::checkSign()
{
	if (str[0] == '-' || str[0] == '+')
		return true;
	return false;
}

bool	convert::getType()
{
	std::string tmp;
	int indx1 = 0;
	int indx2 = 0;

	if (is_digit() == true)
		return true;
	indx1 = str.find("." , indx1);
	if (indx1 == -1)
		return false;
	indx2 = str.find("f", indx1);
	if (indx2 != -1)
		str.erase(indx2, 1);
	tmp = str;
	tmp.erase(indx1, 1);
	if (checkSign() == true)
		tmp.erase(0, 1);
	return (tmp.find_first_not_of("0123456789") == std::string::npos);
}

bool	convert::checkInff()
{
	if (!this->str.compare("-inf") || !this->str.compare("+inf"))
		return true;
	else if (!this->str.compare("-inff") || !this->str.compare("+inff"))
	{
		this->str.erase(str.length() - 1, 1);
		return true;
	}
	return false;
}

bool	convert::is_char()
{
	if (str.length() > 1)
		throw "Bad Arguments..p";
	return (str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos);
}

void	convert::parssArg()
{

	if (checkInff() == true)
		goto jump ;
	if (is_char() == true)
		goto jump;
	if (getType() == false)
		throw "Bad Arguments...f";
	jump :
	ss << this->str;
	ss >> _double;
	if (ss.fail())
	{
		ss.clear();
		throw "Bad Arguments!";
	}
	else
	{
		std::cout << "double : " << this->_double << std::endl;
		return ;
	}
}

convert::~convert()
{
	std::cout << "convert : Destructor Called" << std::endl;
}

convert::convert(convert const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

convert	&convert::operator= (const convert &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
