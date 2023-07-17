NAME = libft.a
SRC = ./srcs/*.c
OBJ = ./*.o
LIBS = ./includes/
CC = gcc
FLAGS = -c -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) $(SRC) -I$(LIBS)
	ar rc $(NAME) $(OBJ)

all: ${NAME}

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

