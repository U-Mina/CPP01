NAME	= harlFilter
C++		= c++
CFLAG	= -Wall -Werror -Wextra -std=c++98
SRC		= main.cpp Harl.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -r $(NAME)

fclean: clean
	rm -f $(OBJ)

re: fclean all

.PHONY: re all clean fclean