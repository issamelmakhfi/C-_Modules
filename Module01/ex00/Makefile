NAME = zombie

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC =  zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.cpp  zombie.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re