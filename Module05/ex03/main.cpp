#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void leak()
{
	system("leaks Bureaucrat");
}

int main()
{
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "omar");
	delete rrf;
	atexit(leak);
	return (0);
}

