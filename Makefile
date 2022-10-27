NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_print_str.c ft_print_nbr.c ft_print_ptr.c ft_print_hexa.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
        $(AR) $(NAME) $(OBJS)

%.o: %.c
        $(CC) $(FLAGS) -g -c $(SRCS)

clean:
        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
