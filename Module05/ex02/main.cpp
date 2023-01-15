#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {

		// Bureaucrat Ghost("Ghost", 3);
		// AForm wati9a("wati9at zawaj", 10, 20);
		ShrubberyCreationForm a("pop");

		// Ghost.incrementGrade();
		// wati9a.beSigned(Ghost);
		// Ghost.signForm(wati9a);
		// a.tree();
	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}

