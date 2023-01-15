#include "AForm.hpp"

AForm::AForm() :  s_grade(0), ex_grade(0)
{
	// std::cout << "AForm : Default Constructor Called" << std::endl;
	// this->ex_grade = 0;
	// this->s_grade = 0;
}

AForm::AForm (std::string  Name, int s_grade, int ex_grade) : Name(Name),  s_grade(s_grade), ex_grade(ex_grade) 
{
	// std::cout << "AForm : Constructor Called" << std::endl;
	if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw AForm::GradeTooHighException();
	else if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
	// std::cout << "AForm : Destructor Called" << std::endl;
}

std::string const AForm::getName() const
{
	return (this->Name);
}

bool AForm::getIndx() const
{
	return (this->idnx);
}

int  AForm::getS_grade() const
{
	return (this->s_grade);
}

int AForm::getEx_grade() const
{
	return (this->ex_grade);
}

void	AForm::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= this->getS_grade())
		this->idnx = 1;
	else
	{
		this->idnx = 0;
		throw AForm::GradeTooLowException();
	}
}

void	AForm::signAForm(Bureaucrat &obj)
{
	if (this->idnx)
		std::cout << obj.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << obj.getName() << " couldn’t sign " << this->getName() << " because " << "Grade too low" << std::endl;
}

void AForm::AFormInfo()
{
	std::cout << "AForm's Name                 : " << this->getName() << std::endl;
	std::cout << "Signed                       : " << this->idnx << std::endl;
	std::cout << "Grade required               : " << this->getS_grade() << std::endl;
	std::cout << "Grade required to execute it : " << this->getEx_grade();
}

std::ostream &operator << (std::ostream &out, AForm &obj)
{
	obj.AFormInfo();
	out << std::endl;
	return (out);
}

const  char * AForm::GradeTooLowException::what () const throw() {
	return ("AForm : Grade Too Low");
}

const  char * AForm::GradeTooHighException::what () const throw() {
	return ("AForm : Grade Too High");
}