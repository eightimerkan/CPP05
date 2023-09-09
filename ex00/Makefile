NAME = Bureaucrat
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): main.cpp Bureaucrat.cpp
	@$(CC) $(FLAGS) main.cpp Bureaucrat.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all