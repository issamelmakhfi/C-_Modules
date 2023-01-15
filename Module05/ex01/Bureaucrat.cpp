#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const _name, int grade) : Name(_name)
{
	std::cout << "Bureaucrat : Constructor Called" << std::endl;
	this->grade = grade;
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string const Bureaucrat::getName() const
{
	return (this->Name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->getGrade() <= 2)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << " , bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}

const  char * Bureaucrat::GradeTooLowException::what () const throw() {
	return ("Grade Too Low");
}

const  char * Bureaucrat::GradeTooHighException::what () const throw() {
	return ("Grade Too High");
}

void	Bureaucrat::signForm(Form &obj)
{
	if (obj.getIndx())
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn’t sign " << obj.getName() << " because " << "Grade too low" << std::endl;
}