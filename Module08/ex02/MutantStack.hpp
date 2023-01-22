#ifndef _MutantStack_HPP_
#define _MutantStack_HPP_

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
		MutantStack () {std::cout << "";};
		MutantStack (MutantStack const &obj) {*this = obj;};
		MutantStack &operator= (const MutantStack &obj) {this->c = obj.c; return (*this);};
		~MutantStack () {std::cout << "";};
		typedef typename container::iterator	iterator;
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
