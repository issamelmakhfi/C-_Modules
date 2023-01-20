#ifndef _Span_HPP_
#define _Span_HPP_

#include <iostream>
#include <exception>
#include <vector>
#include <iterator>
#include <algorithm>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Span
{
	public	:
		Span (unsigned int N);
		class SpanExcp : public std::exception {
			const char *what() const throw();
		};

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		template <typename T>
		void	limmitAdd(T start, T end){
			if (std::distance(start, end) < 0)
				throw SpanExcp();
			for(T ptr = start; ptr < end; ptr++)
				addNumber(*ptr);
		}

	private	:
		std::vector<int>	arr;
		unsigned int _N;
		std::vector<int>::iterator ptr;
		std::vector<int>::iterator ptr1;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
