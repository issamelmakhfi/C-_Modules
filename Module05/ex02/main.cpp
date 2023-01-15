#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {

		Bureaucrat Ghost("Ghost", 4);
		PresidentialPardonForm p("home");
		RobotomyRequestForm r("Robot");
		ShrubberyCreationForm a("pop");
		r.beSigned(Ghost);
		p.beSigned(Ghost);
		a.beSigned(Ghost);
		Ghost.signForm(a);
		Ghost.signForm(p);
		Ghost.signForm(r);
		Ghost.executeAForm(a);
		Ghost.executeAForm(p);
		Ghost.executeAForm(r);

	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}

