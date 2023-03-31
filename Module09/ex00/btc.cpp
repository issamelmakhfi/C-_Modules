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

void	countPipe(std::string str)
{
	int cont = 0;
	int cont1 = 0;

	if ((str.find_first_of("|") == std::string::npos))
		throw std::runtime_error("Error: Bad input-");
	for (size_t i = 0; i <= str.find_first_of("|");i++)
	{
		if (str[i] == '-')	
			cont++;
		if (str[i] == '|')
			cont1++;
	}
	if (cont != 2 || cont1 != 1)
		throw std::runtime_error("Error: Bad input/");
}

void	btc::readFromInput()
{
	int	i = 0;
	std::string	str;

	std::map<std::string, std::string>::iterator low;
	while (getline(this->input, str))
	{
		try {
			countPipe(str);
			i = 0;
			while (str[i] == ' ')
				i++;
			this->token = trim(str.substr(0, str.find_first_of("|")), WHITESPACE);
			this->year = str.substr(i, str.find_first_of("-") - i);
			this->month = str.substr(str.find_first_of("-") + 1, str.find_last_of("-") - str.find_first_of("-") - 1);
			this->day = token.substr(token.find_last_of("-") + 1, token.find_first_of("|") - token.find_last_of("-"));
			this->value = str.substr(str.find_first_of("|") + 1);
			btc::parssDay();
			btc::parssValue();
			btc::parssYear();
			btc::parssMonth();
			low = map.lower_bound(token);
			std::cout << token << "  ====> " << this->val << " = " << atof(map[low->first].c_str()) * this->val << std::endl;
		}
		catch (std::runtime_error &e)
		{
			std::cout << e.what() << std::endl;
		}
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
		if (tmp[i] == '-')
			throw std::runtime_error("Error:  not a positive number");
		if ((!isdigit(tmp[i]) && tmp[i] != '.') || cont > 1)
			throw std::runtime_error("Error: Bad input");
		if (atof(tmp.c_str()) > 1000)
			throw std::runtime_error("Error: too large number");
		if (atof(tmp.c_str()) < 0)
			throw std::runtime_error("Error: too small number");
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
}

void	btc::parssYear()
{
	if (!isDigit(year) || atoi(year.c_str()) <= 1983)
		throw std::runtime_error ("Error: Bad input");
}

void	btc::parssMonth()
{
	if (!isDigit(month) || atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		throw std::runtime_error("Error: Bad input");
}


void	btc::parssDay()
{
	std::string tmp;

	tmp = rtrim(day, "|");
	tmp = rtrim(tmp, WHITESPACE);
	if (!isDigit(tmp) || tmp.size() > 2)
		throw std::runtime_error("Error: Bad input1");
	if (atoi(month.c_str()) >= 1 && atoi(month.c_str()) < 8 && atoi(month.c_str()) % 2 == 0)
	{
		if (atoi(tmp.c_str()) < 1 || atoi(tmp.c_str()) > 30)
			throw std::runtime_error("Error: Bad input2");
	}
	else
	{
		if (atoi(tmp.c_str()) < 1 || atoi(tmp.c_str()) > 31)
			throw std::runtime_error("Error: Bad input3");
	}
	if (atoi(this->year.c_str()) % 4 != 0 || (atoi(this->year.c_str()) % 100 == 0 && atoi(this->year.c_str()) % 400 != 0))
	{
		if (atoi(this->month.c_str()) == 02)
		{
			if (atoi(tmp.c_str()) < 1 ||  atoi(tmp.c_str()) > 28)
				throw std::runtime_error("Error: Bad input4");
		}
	}
	else
	{
		if (atoi(this->month.c_str()) == 02)
		{
			if (atoi(this->day.c_str()) < 1 ||  atoi(this->day.c_str()) > 29)
				throw std::runtime_error("Error: Bad input5");
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