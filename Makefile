NAME = libft.a
MANDATORY = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS_M = ${MANDATORY:.c=.o}
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS_B = ${BONUS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
CC = gcc

${NAME}: ${OBJECTS_M}
	ar rc ${NAME} ${OBJECTS_M}

bonus: ${OBJECTS_B}
	ar rc ${NAME} ${OBJECTS_B}

all: ${OBJECTS_M} ${OBJECTS_B}
	ar rc ${NAME} ${OBJECTS_M} ${OBJECTS_B}

clean:
	rm -f ${OBJECTS_M} ${OBJECTS_B}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY = all clean fclean re