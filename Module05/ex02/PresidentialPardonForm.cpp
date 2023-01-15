#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm : Default Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm : Destructor Called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm" , 24, 5)
{
	// std::cout << "PresidentialPardonForm : Default Constructor Called" << std::endl;
	this->target = target;
}

void 	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIndx() && executor.getGrade() <= this->getS_grade())
		std::cout << "\33[0;32m" << this->target << " has been pardoned by Zaphod Beeblebrox \33[0m" << std::endl;
}