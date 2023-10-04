C_FILES = ft_isalnum.c ft_isalpha.c	ft_isdigit.c

H_FILES = libft.h

COMPILER_C = gcc
C_FLAGS = -Wall -Werror -Wextra
COMPILER_A = ar -rcs

NAME = libft.a
OBJ = $(C_FILES:%.c=%.o)

all: $(NAME)

#Esto no funciona si los .o no existen o no estan modificados
$(NAME): $(OBJ)
		$(COMPILER_A) $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all

#.PHONY es para asegurar que le gnu make seguira funcionando incluso si los archivos llamados clean / fclean / all and re ya existen en el directorio
.PHONY: clean fclean all re