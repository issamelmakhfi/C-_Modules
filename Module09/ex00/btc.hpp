#ifndef _btc_HPP_
#define _btc_HPP_

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <map>
#include <iterator>
#include <ctime>
#include <limits>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	btc
{
	public	:
		btc ();
		~btc ();

		void	parssFile(char *FileName);
		void	readFromFile();
		void	readFromInput();
		void	parssDay();
		void	parssYear();
		void	parssMonth();
		void	parssValue();
		void	countPipe(std::string str);

	private	:
		double		val;
		std::string	year;
		std::string month;
		std::string	day;
		std::string value;
		std::string dash;
		std::string rest;
		std::string date;
		std::fstream data;
		std::fstream input;
		std::map<std::string, std::string> map;
		std::map<std::string, std::string>::iterator it;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::string rtrim(const std::string &s, std::string ch);
std::string ltrim(const std::string &s, std::string ch);
std::string trim(const std::string &s, std::string ch);

#endif
