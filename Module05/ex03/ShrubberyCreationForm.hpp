#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include <iostream>
#include "AForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ShrubberyCreationForm : public AForm
{
	public	:
		ShrubberyCreationForm ();
		ShrubberyCreationForm (std::string target);
		~ShrubberyCreationForm ();

		void	execute(Bureaucrat const &executer) const;

	private	:
		std::string target;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
