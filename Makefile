NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -r
SRCS = ft_printf.c ft_put_basic.c ft_put_numbers.c ft_put_hex.c Main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 ar rcs $(NAME) $(OBJS)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
