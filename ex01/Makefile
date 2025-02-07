NAME	= horde
C++		= c++
CFLAG	= -Wall -Wextra -Werror
SRC		= main.cpp Zombie.cpp zombieHorde.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean