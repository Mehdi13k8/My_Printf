##
## EPITECH PROJECT, 2017
## a
## File description:
## a
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_ptr_modulo.c	\
		my_ptr_majhex.c	\
		my_ptr_adhexa.c	\
		my_ptr_putstr.c	\
		my_ptr_unsign.c	\
		my_ptr_s.c	\
		my_ptr_bin.c	\
		my_ptr_octal.c	\
		my_ptr_hexa.c	\
		my_ptr_put_nbr.c\
		my_ptr_putchar.c\
		my_put_nbrex.c	\
		my_put_nbrexup.c\
		my_put_nbr.c	\
		my_getnbr.c	\
		ma_strlen.c	\
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
