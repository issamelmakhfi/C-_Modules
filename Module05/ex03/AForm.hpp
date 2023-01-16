#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class Bureaucrat;

class	AForm
{
	public	:
		AForm ();
		AForm (std::string Name, int s_grade, int ex_grade);
		virtual ~AForm () = 0;

		class GradeTooHighException : public std::exception {
			public :
				const char * what () const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const  char *what () const throw();
		};

		void beSigned(Bureaucrat &obj);
		std::string const getName() const;
		bool getIndx() const;
		int getS_grade() const;
		int getEx_grade() const;
		void	AFormInfo();
		void	signAForm(Bureaucrat &obj);
		virtual void execute(Bureaucrat const & executor) const = 0;


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

std::ostream &operator << (std::ostream &out, AForm &obj);

#endif
