NAME = Bureaucrat 

CXXFLAGS = -Wall -Wextra -Werror 

CC = c++ 

STD = -std=c++98 

SRC =  ShrubberyCreationForm.cpp main.cpp AForm.cpp Bureaucrat.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

INC =  ShrubberyCreationForm.hpp AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

OBJ = $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@ 

clean :
	rm -rf $(OBJ) *_shrubbery

fclean : clean
	rm -rf $(NAME) 

re : fclean all 

.PHONY : all clean fclean re
