#ifndef _btc_HPP_
#define _btc_HPP_

#include <iostream>
#include <fstream>
#include <stdio.h>

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
		void	errorHandler(std::string mssg);
		void	readFromFile();

	private	:
		std::fstream data;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
