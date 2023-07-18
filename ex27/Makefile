NAME = ft_display_file
SRC = *.c
LIB = *.h
CC = gcc
FLAGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(FLAGS) $(SRC) -I$(LIB) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f *.o
	rm -f *.a

re: fclean all
