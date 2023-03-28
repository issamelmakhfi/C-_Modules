#ifndef _btc_HPP_
#define _btc_HPP_

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <map>
#include <ctime>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	btc
{
	public	:
		btc ();
		btc (btc const &obj);
		~btc ();
		btc &operator= (const btc &obj);

		void	parssFile(char *FileName);
		void	readFromFile();
		void	readFromInput();
		void	parssDay();
		void	parssYear();
		void	parssMonth();
		void	parssValue();

	private	:
		std::string	year;
		std::string month;
		std::string	day;
		std::string value;
		std::string dash;
		std::string rest;
		double		val;
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
