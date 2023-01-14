#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Form
{
	public	:
		// Form ();
		Form (std::string Name, int s_grade, int ex_grade);
		~Form ();

		class GradeTooHighException : public std::exception {
			public :
				const char * what () const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const  char *what () const throw();
		};

		void beSigned(Bureaucrat &obj);
		std::string const getName();
		bool getIndx();
		int getS_grade() const;
		int getEx_grade() const;
		void	FormInfo();
		void	signFrom();


	private	:
		std::string const Name;
		bool idnx;
		int const s_grade;
		int const ex_grade;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream &operator << (std::ostream &out, Form &obj);

#endif
