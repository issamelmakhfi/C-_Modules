#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern : Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern : Destructor Called" << std::endl;
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
	int i = 0;
	AForm *ptr;

	std::string	forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	while (i < 3)
	{
		if (!form_name.compare(forms[i]))
			break;
		i++;
	}
	switch (i)
	{
	case 0 :
		ptr = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << ptr->getName() << std::endl;
		return (ptr);
	case 1 :
		ptr = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << ptr->getName() << std::endl;
		return (ptr);
	case 2 :
		ptr = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << ptr->getName() << std::endl;
		return (ptr);
	default:
		std::cout << "\33[0;31mThis no Form with this name : " << form_name << "\33[0m" << std::endl;
		return (NULL);
	}
}
