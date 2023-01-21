#include "MutanStack.hpp"

int main()
{
	MutanStack<int, std::vector<int> > mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	// std::cout << *(mstack.begin()) << std::endl;
	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]

	mstack.push(0);

	std::cout << mstack.size() << std::endl;
	MutanStack<int>::iterator it = mstack.begin();
	// MutanStack<int>::iterator ite = mstack.end();

	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::stack<int> s(mstack);

	return (0);
}
