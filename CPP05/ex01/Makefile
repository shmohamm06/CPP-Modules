NAME = Form
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = main.cpp Bureaucrat.cpp Form.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all