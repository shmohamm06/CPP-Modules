NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) phonebook.cpp -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
