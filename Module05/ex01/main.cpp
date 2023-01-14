#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {

		Bureaucrat Ghost("Ghost", 3);
		Form wati9a("wati9at zawaj", 10, 20);
		// (void)Ghost;
		// (void)wati9a;
		Ghost.incrementGrade();
		wati9a.beSigned(Ghost);
	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}

	// try {
	// 	Bureaucrat Od("odin", 125);
	// 	Bureaucrat Gh("Ghost", 15);

	// 	Od.incrementGrade();
	// 	Gh.decrementGrade();
	// 	std::cout << Od << Gh;
	// }
	return (0);
}

