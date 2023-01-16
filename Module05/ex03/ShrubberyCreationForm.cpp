#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm : Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137)
{
	this->target = target + "_shrubbery";
}


void	ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
	std::ofstream ofs;
	if (this->getIndx() && executer.getGrade() <= this->getEx_grade())
	{
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
	else
		throw AForm::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}
