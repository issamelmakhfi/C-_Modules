#include "Form.hpp"

// Form::Form()
// {
// 	std::cout << "Form : Default Constructor Called" << std::endl;
// 	this->ex_grade = 0;
// 	this->
// }

Form::Form (std::string  Name, int s_grade, int ex_grade) : Name(Name),  s_grade(s_grade), ex_grade(ex_grade) 
{
	std::cout << "Form : Constructor Called" << std::endl;
	if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw Form::GradeTooHighException();
	else if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Form : Destructor Called" << std::endl;
}

std::string const Form::getName()
{
	return (this->Name);
}

bool Form::getIndx()
{
	return (this->idnx);
}

int  Form::getS_grade() const
{
	return (this->s_grade);
}

int Form::getEx_grade() const
{
	return (this->ex_grade);
}

void	Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > this->getS_grade())
	{
		this->idnx = 0;
		throw Form::GradeTooLowException();
	}
}

void	Form::signForm(Bureaucrat &obj)
{
	if (this->idnx)
		std::cout << obj.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << obj.getName() << " couldn’t sign " << this->getName() << " because " << "Grade too low" << std::endl;
}

void Form::FormInfo()
{
	std::cout << "Form's Name                  : " << this->getName() << std::endl;
	std::cout << "Signed                       : " << this->idnx << std::endl;
	std::cout << "Grade required               : " << this->getS_grade() << std::endl;
	std::cout << "Grade required to execute it : " << this->getEx_grade();
}

std::ostream &operator << (std::ostream &out, Form &obj)
{
	obj.FormInfo();
	out << std::endl;
	return (out);
}

const  char * Form::GradeTooLowException::what () const throw() {
	return ("Form : Grade Too Low");
}

const  char * Form::GradeTooHighException::what () const throw() {
	return ("Form : Grade Too High");
}