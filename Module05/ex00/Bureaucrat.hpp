#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Bureaucrat
{
	public	:
		Bureaucrat ();
		Bureaucrat (std::string Name);
		Bureaucrat (Bureaucrat const &obj);
		~Bureaucrat ();

		std::string const getName();
		int 	getGrade();
		void	checkGrade(Bureaucrat &obj);

	private	:
		std::string const Name;
		int grade;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
