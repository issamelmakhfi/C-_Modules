#ifndef _easy_HPP_
#define _easy_HPP_

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <vector>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class NotFound : public std::exception {
	const char * what() const throw() {
		return "NOT FOUND!";
	}
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

template <typename T>
int	easyfind(T a, int b)
{
	typename	T::iterator ptr;

	ptr = std::find(a.begin(), a.end(), b);
	if (ptr != a.end())
		return (*ptr);
	throw NotFound();
}

#endif
