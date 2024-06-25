#NAME
NAME = libftprintf.a


#SOURCEFILES
SOURCES = \
	ft_printf.c ft_put_unsigned_nbr.c ft_putadress.c ft_putchar.c ft_putlowhex.c \
	ft_putnbr.c ft_putstr.c ft_putuphex.c ft_strlen.c
#OBJECTS
OBJECTS = $(SOURCES:.c=.o)

#COMPILER
CC = cc

#COMPILERFLAGS
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJECTS)
				ar rc $@ $(OBJECTS)

%.o: %c libprintf.h
		@echo "compilng..."
		$(CC) -c $(FLAGS) $<

clean:
		@echo "removing files..."
		rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
		@echo "removing program..."
		rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
