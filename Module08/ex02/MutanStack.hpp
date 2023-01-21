#ifndef _MutanStack_HPP_
#define _MutanStack_HPP_

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>
#include <deque>
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
template <typename T, typename container = std::deque<T> >
class	MutantStack : public std::stack<T, container>
{
	public	:
		typedef typename container::iterator	iterator;
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
	// private :
	// 	_Container	c;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
