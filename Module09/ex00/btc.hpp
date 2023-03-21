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

	private	:
		int	year;
		int month;
		int	day;
		std::string dash;
		std::fstream data;
		std::fstream input;
		std::map<std::string, std::string> map;
		std::map<std::string, std::string>::iterator it;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
