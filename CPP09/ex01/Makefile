NAME = RPN
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = main.cpp RPN.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	@rm -f $(NAME)

re: fclean all