#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include <iostream>
#include "AForm.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //


class	RobotomyRequestForm : public AForm
{
	public	:
		RobotomyRequestForm ();
		RobotomyRequestForm (std::string target);
		~RobotomyRequestForm ();

		void	execute(Bureaucrat const &executor) const;

	private	:
		std::string target;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
