NAME = libft.a
SRC = *.c
OBJ = *.o
FLAGS = -Wall -Wextra -Werror
HED = libft.h
all:$(NAME)
$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HED)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
