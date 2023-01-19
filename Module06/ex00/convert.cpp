#include "convert.hpp"

convert::convert(char *av)
{
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
	if (indx2 - indx1 == 1)
		return false;
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
	if (!this->str.compare("-inf") || !this->str.compare("+inf") || !this->str.compare("nan"))
	{
		this->check = 1;
		return true;
	}
	else if (!this->str.compare("-inff") || !this->str.compare("+inff") || !this->str.compare("nanf"))
	{
		this->check = 1;
		this->str.erase(str.length() - 1, 1);
		return true;
	}
	return false;
}

bool	convert::is_char()
{
	if (str.length() == 1 && isprint(str[0]))
		return true;
	return false;
}

void	convert::parssArg()
{
	if (checkInff() == true)
	{
		ss << this->str;
		ss >> _double;
	}
	else if (is_char() == true)
	{
		ss << (int)this->str[0];
		ss >> _double;
	}
	else if (getType() == true)
	{
		ss << this->str;
		ss >> _double;
		if (_double < -2147483648 || _double > 2147483647)
			throw "INT LIMITE";
	}
	else
		throw "Bad Arguments";
	if (ss.fail())
	{
		ss.clear();
		throw "Bad Arguments!";
	}
}

void	convert::printInfo()
{
	if (isprint((int)_double))
		std::cout << "char   : '" << (char)this->_double << "'" <<std::endl;
	else if (!this->check)
		std::cout << "char   : " << "Non displayable" << std::endl;
	else
		std::cout << "char   : " << "Impossible" << std::endl;
	if (!this->check)
		std::cout << "int    : " << this->_double << std::endl;
	else
		std::cout << "int    : " << "Impossible" << std::endl;
	if ((int)this->_double == (float)this->_double)
		std::cout << "float  : " << this->_double << ".0f" << std::endl;
	else
		std::cout << "float  : " << this->_double << "f" << std::endl;
	if ((int)this->_double == this->_double)
		std::cout << "double : " << this->_double << ".0" << std::endl;
	else
		std::cout << "double : " << this->_double << std::endl;
}