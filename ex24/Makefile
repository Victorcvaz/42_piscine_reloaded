NAME = libft.a
SRC = ./srcs/*.c
H_SRC = ./includes/

$(NAME):
	gcc -Wall -Werror -Wextra -I${H_SRC} ${SRC} -o ${NAME}

all: ${NAME}
clean: fclean
fclean:
	rm -f $(NAME)
re: fclean all

