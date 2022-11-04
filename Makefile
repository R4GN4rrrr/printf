NAME = libftprintf.a

SOURCES = ft_upx.c ft_printf.c ft_posnbr.c ft_pointxf.c ft_lowx.c ft_putchar.c ft_putnbr.c ft_putstr.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Werror -Wextra -Wall

$(NAME): $(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all