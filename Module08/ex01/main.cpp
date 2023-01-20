#include "Span.hpp"

int main()
{
	unsigned int N = 5;
	Span ar = Span(N);
	std::vector<int> v;

	v.push_back(6);
	v.push_back(3);
	v.push_back(17);
	v.push_back(9);
	v.push_back(11);
	try {
		ar.limmitAdd(v.begin(), v.end());
		std::cout << ar.shortestSpan() << std::endl;
		std::cout << ar.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
