NAME = ft_display_file
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -c -Wall -Wextra -Werror

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)
	
%.o: %.c
	$(CC) $(FLAGS) $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
