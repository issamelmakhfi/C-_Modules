#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->_N = N;
}

void	Span::addNumber(int num)
{
	if (arr.size() > this->_N - 1)
		throw Span::SpanExcp();
	arr.push_back(num);
}

const char *Span::SpanExcp::what() const throw() 
{
	return "The container already full";
}

int	Span::longestSpan()
{
	this->ptr = std::max_element(arr.begin(), arr.end());
	this->ptr1 = std::min_element(arr.begin(), arr.end());
	return (*ptr - *ptr1);
}

int Span::shortestSpan()
{
	int ret;
	std::sort(arr.begin(), arr.end());
	ptr = arr.begin();
	ptr1 = arr.begin() + 1;
	ret = *ptr1 - *ptr;
	while (ptr1 != arr.end())
	{
		if (ret > (*ptr1 - *ptr))
			ret = *ptr1 - *ptr;
		ptr1++;
		ptr++;
	}
	return (ret);
}