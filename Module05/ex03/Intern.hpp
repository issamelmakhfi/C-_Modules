#ifndef _Intern_HPP_
#define _Intern_HPP_

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Intern
{
	public	:
		Intern ();
		~Intern ();

		AForm* makeForm(std::string form_name, std::string target);
	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
