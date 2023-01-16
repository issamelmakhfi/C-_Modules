#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main () {
//    time_t t;
//    srand((unsigned) time(&t));
//    printf("%d\n", rand() % 2);
//    return(0);
// }

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
		std::cout << p;
		std::cout << r;
		std::cout << a;

	}
	catch (std::exception const &obj) {
		std::cout << obj.what() << std::endl;
	}
	return (0);
}

