NAME = PhoneBook
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = Main.cpp Contact.cpp PhoneBook.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all
