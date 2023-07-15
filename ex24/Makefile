NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
H_SRC = ./includes/

$(NAME):
	gcc -Wall -Werror -Wextra -I${H_SRC} ${SRC} -o ${NAME}

all: ${NAME}
clean: fclean
fclean:
	rm -f $(NAME)
re: fclean all

