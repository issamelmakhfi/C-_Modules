NAME = manipulation

CXXFLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC =  main.cpp harl.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) harl.hpp
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.cpp harl.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re