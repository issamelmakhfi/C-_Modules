#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	///////
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm : Destructor Called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIndx() && executor.getGrade() <= this->getS_grade())
	{
		if ((rand() % 2) == 1)
			std::cout << "\33[0;32m" << this->target << " has been robotomized successfully 50%% of the time\33[0m" << std::endl;
		else
			std::cout << "\33[0;31mThe robotomy failed\33[0;m" << std::endl;
	}
}