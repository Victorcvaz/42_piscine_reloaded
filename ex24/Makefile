NAME = libft.a
SRC = ./srcs/*.c
OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR), $(notdir SRC:.c=.o))
LIBS = ./includes/
CC = gcc
FLAGS = -c -Wall -Werror -Wextra

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)%.o: %.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -I$(LIBS) $< -o $@

all: ${NAME}

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

