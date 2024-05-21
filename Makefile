##
## EPITECH PROJECT, 2023
## test
## File description:
## test
##

SRC	=	main.c			\
		open_file.c		\
		pattern_map.c		\
		lenght_map.c		\

CFLAGS	=	-Wall -Wextra

FLAGS	=	 -L ./lib/my -lmy -I include

NAME	=	setting_up

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(SRC) $(FLAGS)

clean:
	make clean -C lib/my
	rm -f $(OBJ) $(NAME)

fclean: clean

re: fclean all

.PHOMY: all clean fclean re
