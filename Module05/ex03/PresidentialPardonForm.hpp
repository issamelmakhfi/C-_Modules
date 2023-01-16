#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include <iostream>
#include <stdlib.h>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class Bureaucrat;

class	PresidentialPardonForm : public AForm
{
	public	:
		PresidentialPardonForm ();
		PresidentialPardonForm (std::string target);
		~PresidentialPardonForm ();

		void	execute(Bureaucrat const &executor) const;

	private	:
		std::string target;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
