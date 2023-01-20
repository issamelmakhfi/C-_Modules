#ifndef _itr_HPP_
#define _itr_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

template <typename T>
void	iter(T *array, std::size_t len, void fun(T val))
{
	for (size_t i = 0 ; i < len ; i++)
	{
		fun(array[i]);
	}
}

template <typename T>
void	show(T val)
{
	std::cout << val << std::endl;
}

#endif
