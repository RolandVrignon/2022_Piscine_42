NAME = libft.a

SRC =   srcs/ft_putchar.c \
        srcs/ft_swap.c \
        srcs/ft_putstr.c \
        srcs/ft_strlen.c \
        srcs/ft_strcmp.c

OBJS = $(SRC:.c=.o)

CC = gcc

AR = ar -rc

RM = rm -f

INC = includes

CFLAGS = -Wall -Werror -Wextra -I$(INC)

.c.o = $(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
        $(AR) $(NAME) $(OBJS)

all:    $(NAME)

clean:
        $(RM) $(NAME)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re