#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {

		Bureaucrat Ghost("Ghost", 3);
		Form wati9a("wati9at zawaj", 10, 20);

		Ghost.incrementGrade();
		wati9a.beSigned(Ghost);
		Ghost.signForm(wati9a);
		std::cout << wati9a;

	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}

