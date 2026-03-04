NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -r
SRC = ft_printf.c ft_put_basic.c ft_put_numbers.c ft_put_hex.c Main.c
OBJ = $(SRC:.c/.o)

all: $(NAME)
$(NAME): $(OBJ)
	 ar rcs $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	RM $(OBJ)
fclean:clean
	RM $(NAME)
re: fclean all

.PHONY: all clean fclean re
