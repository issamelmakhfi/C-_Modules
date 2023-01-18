#ifndef _convert_HPP_
#define _convert_HPP_

#include <iostream>
#include <sstream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	convert
{
	public	:
		convert (char *av);
		convert (convert const &obj);
		~convert ();
		convert &operator= (const convert &obj);

		void	parssArg();
		bool	is_digit();
		bool	getType();
		bool	checkSign();
		bool 	checkInff();
		bool	is_char();

	private	:
		std::stringstream ss;
		std::string str;
		// char _chr;
		// char	sig;
		// int	_int;
		// float _float;
		double _double;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
