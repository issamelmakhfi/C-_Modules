#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat Od("odin", 125);
		Bureaucrat Gh("Ghost", 15);

		Od.incrementGrade();
		Gh.decrementGrade();
		std::cout << Od << Gh;
	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}

