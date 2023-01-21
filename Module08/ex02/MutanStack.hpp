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
class	MutanStack : public std::stack<T, container>
{
	public	:
		typedef typename std::stack<T, container>::container_type::iterator	iterator;
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
