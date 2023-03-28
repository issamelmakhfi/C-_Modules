#include "btc.hpp"

const std::string WHITESPACE = " \n\r\t\f\v";

btc::btc()
{
	// std::cout << "btc : Default Constructor Called" << std::endl;
}

btc::~btc()
{
	// std::cout << "btc : Destructor Called" << std::endl;
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
		this->day = str.substr(8, str.find_last_of("|") - 8 + 1);
		this->value = str.substr(str.find_first_of("|") + 1);

		btc::parssDay();
		btc::parssValue();
		btc::parssYear();
		btc::parssMonth();
		break;
	}
}

int	isDigit(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
void	btc::parssValue()
{
	std::string tmp;
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	tmp = trim(this->value, WHITESPACE);
	while (tmp[i])
	{
		if (tmp[i] == ',')
			cont++;
		if ((!isdigit(tmp[i]) && tmp[i] != '.') || cont > 1)
			throw std::runtime_error("ERROR: DATE NOT VALID");
		i++;
	}
	this->val = atof(tmp.c_str());
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

void	btc::parssYear()
{
	if (!isDigit(year) || atoi(year.c_str()) <= 1983)
		throw std::runtime_error ("ERROR: DATE NOT VALID");
}

void	btc::parssMonth()
{
	if (!isDigit(month) || atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		throw std::runtime_error("ERROR: DATE NOT VALID");
}

void	contPipe(std::string str)
{
	int i;
	int cont;

	cont = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '|')
			cont++;
		i++;
	}
	if (cont > 1)
		throw std::runtime_error("ERROR:DATE NOT VALID");
}

void	btc::parssDay()
{
	std::string tmp;

	tmp = rtrim(day, "|");
	tmp = rtrim(tmp, WHITESPACE);
	for (size_t i = 0;i < dash.size();i++)
	{
		if (dash[i] != '-')
			throw std::runtime_error("ERROR:DATE NOT VALID");
	}
	if (this->dash.size() != 2)
		throw std::runtime_error("ERROR:DATE NOT VALID");
	if (!isDigit(tmp) || tmp.size() > 2)
		throw std::runtime_error("ERROR:DATE NOT VALID");
	if (atoi(month.c_str()) >= 1 && atoi(month.c_str()) < 8 && atoi(month.c_str()) % 2 == 0)
	{
		if (atoi(tmp.c_str()) < 1 || atoi(tmp.c_str()) > 30)
			throw std::runtime_error("ERROR: DATE NOT VALID");
	}
	else
	{
		if (atoi(tmp.c_str()) < 1 || atoi(tmp.c_str()) > 31)
			throw std::runtime_error("ERROR: DATE NOT VALID");
	}
	if (atoi(this->year.c_str()) % 4 != 0 || (atoi(this->year.c_str()) % 100 == 0 && atoi(this->year.c_str()) % 400 != 0))
	{
		if (atoi(this->month.c_str()) == 02)
		{
			if (atoi(tmp.c_str()) < 1 ||  atoi(tmp.c_str()) > 28)
				throw std::runtime_error("ERROR: DATE NOT VALID");
		}
	}
	else
	{
		if (atoi(this->month.c_str()) == 02)
		{
			if (atoi(this->day.c_str()) < 1 ||  atoi(this->day.c_str()) > 29)
				throw std::runtime_error("ERROR: DATE NOT VALID");
		}
	}
}

 
 
std::string ltrim(const std::string &s, std::string ch)
{
    size_t start = s.find_first_not_of(ch);
    return (start == std::string::npos) ? "" : s.substr(start);
}
 
std::string rtrim(const std::string &s, std::string ch)
{
    size_t end = s.find_last_not_of(ch);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string &s, std::string ch) {
    return rtrim(ltrim(s, ch), ch);
}