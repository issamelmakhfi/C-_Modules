#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
#include <exception>
#include "Form.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class Form ;

class	Bureaucrat
{
	public	:
		Bureaucrat ();
		Bureaucrat (std::string const _name, int grade);
		~Bureaucrat ();
		class GradeTooHighException : public std::exception {
			public :
				const char * what () const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const  char *what () const throw();
		};

		std::string const getName() const;
		int 	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &obj);

	private	:
		std::string const Name;
		int grade;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream & operator << (std::ostream &out, Bureaucrat const &obj);

#endif
