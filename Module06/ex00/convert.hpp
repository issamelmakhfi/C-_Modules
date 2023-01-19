#ifndef _convert_HPP_
#define _convert_HPP_

#include <iostream>
#include <sstream>
#include <limits>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	convert
{
	public	:
		convert (char *av);

		void	parssArg();
		bool	is_digit();
		bool	getType();
		bool	checkSign();
		bool 	checkInff();
		bool	is_char();
		void	printInfo();

	private	:
		std::stringstream ss;
		std::string str;
		int		check;
		double _double;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
