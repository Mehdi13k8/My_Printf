##
## EPITECH PROJECT, 2017
## a
## File description:
## a
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_getnbr.c	\
		my_printf.c


OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
