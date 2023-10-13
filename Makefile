C_FILES = ft_isalnum.c    ft_isprint.c    ft_memcpy.c     ft_putendl_fd.c ft_strchr.c     ft_strlcpy.c    ft_strnstr.c    ft_tolower.c \
         ft_atoi.c       ft_isalpha.c    ft_itoa.c       ft_memmove.c    ft_putnbr_fd.c  ft_strdup.c     ft_strlen.c     ft_strrchr.c    ft_toupper.c \
         ft_bzero.c      ft_isascii.c    ft_memchr.c     ft_memset.c     ft_putstr_fd.c  ft_strjoin.c    ft_strmapi.c    ft_strtrim.c  \
         ft_calloc.c     ft_isdigit.c    ft_memcmp.c     ft_putchar_fd.c ft_split.c      ft_strlcat.c    ft_strncmp.c    ft_substr.c ft_striteri.c
B_FILES = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

H_FILES = libft.h

COMPILER_C = gcc
C_FLAGS = -Wall -Werror -Wextra
COMPILER_A = ar -rcs

NAME = libft.a
OBJ = $(C_FILES:%.c=%.o)
B_OBJ = $(B_FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(COMPILER_A) $(NAME) $(OBJ) $(H_FILES)

bonus: $(OBJ) $(B_OBJ)
		$(COMPILER_A) $(NAME) $(B_OBJ) $(OBJ) $(H_FILES)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all

#.PHONY es para asegurar que le gnu make seguira funcionando incluso si los archivos llamados clean / fclean / all and re ya existen en el directorio
.PHONY: clean bonus fclean all re