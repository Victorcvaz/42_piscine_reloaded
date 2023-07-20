NAME = libft.a
SRC = ./srcs/ft_putchar.c
OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))
LIBS = ./includes/
CC = gcc
FLAGS = -c -Wall -Werror -Wextra

.PHONY: clean fclean re

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)%.o: ./srcs/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -I$(LIBS) $< -o $@

all: ${NAME}

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all

