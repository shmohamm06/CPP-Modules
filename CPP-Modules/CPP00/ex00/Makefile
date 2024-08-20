NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
