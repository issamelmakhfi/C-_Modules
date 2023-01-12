#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
	this->grade = 10;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat::Bureaucrat(std::string Name)
{
	std::cout << "Bureaucrat : Constructor Called" << std::endl;
	this->Name = Name;
}

std::string const Bureaucrat::getName()
{
	return (this->Name);
}

int	Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::checkGrade(Bureaucrat &obj)
{
	try {
		if (obj.getGrade() < 1 && obj.getGrade() > 150)
			std::cout << "GRADE DONE" << std::endl;
		else
			throw (obj.getGrade());
	}
	catch (int grade) {
		std::cout << "GRADE ERROR" << std::endl;
		std::cout << "GRADE is : " << grade << std::endl;
	}
}