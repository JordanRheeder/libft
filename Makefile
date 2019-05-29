NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

SRC =	ft_bzero.c		\
		ft_atoi.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_isascii.c	\
		ft_islower.c	\
		ft_memcmp.c		\
		ft_memset.c		\
		ft_memchr.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memcmp.c		\
		ft_memmove.c	\
		ft_strstr.c		\
		ft_strcmp.c		\
		ft_strncmp.c	\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_strchr.c		\
		ft_strlcat.c	\
		ft_strncat.c	\
		ft_strcat.c		\
		ft_strcpy.c		\
		ft_strncpy.c	\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_strdup.c		\
		ft_strlen.c		\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_memalloc.c	\
		ft_memdel.c		\
		ft_strnew.c		\
		ft_strdel.c		\
		ft_strclr.c		\
		ft_striter.c	\
		ft_striteri.c	\
		ft_strmap.c		\
		ft_strmapi.c	\
		ft_strequ.c		\
		ft_strnequ.c	\
		ft_strsub.c		\
		ft_strndup.c	\
		ft_strjoin.c	\




OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	fclean all

.PHONY: clean fclean all re
