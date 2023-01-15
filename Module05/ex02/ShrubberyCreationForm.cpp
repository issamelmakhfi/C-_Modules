#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137)
{
	std::ofstream ofs;

	std::cout << "ShrubberyCreationForm : Constructor Called" << std::endl;

	checkGrade();
	this->target = target + "_shrubbery";
	ofs.open(this->target, std::ofstream::out);
	if (ofs.is_open())
	{
		ofs << "           ,@@@@@@@," << std::endl
				<< "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
				<< ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
				<< ",%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
				<< "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
				<< "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
				<< "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
				<< "    |o|        | |         | |" << std::endl
				<< "    |.|        | |         | |" << std::endl
				<< " \\/ ._\\/\\/_/__/  ,\\_//__\\/.  \\_//__/_";
		ofs.close();
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}

void ShrubberyCreationForm::checkGrade()
{
	if (this->getS_grade() < 145 && this->getEx_grade() < 137)
		throw AForm::GradeTooHighException();
	else if (this->getS_grade() > 145 && this->getEx_grade() > 137)
		throw AForm::GradeTooLowException();
}