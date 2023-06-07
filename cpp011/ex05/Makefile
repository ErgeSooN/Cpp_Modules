RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m


SRCS = $(wildcard *.cpp)

CC = clang++
NAME = harl

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re