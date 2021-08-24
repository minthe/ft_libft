CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a
HEADER	=	libft.h
SRC		=	ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c\
			ft_isprint.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_memmove.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_putstr_fd.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_atoi.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_itoa.c \
			ft_split.c \

SRC_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

all: $(NAME)

$(NAME) : ${OBJS}	$(HEADER)
	ar rcs $(NAME)	${OBJS}

bonus: ${OBJS_BONUS}	${HEADER}
	ar rcs ${NAME}	${OBJS_BONUS}

clean:
	rm -f ${OBJS}
	rm -f ${OBJS_BONUS}

fclean: clean
	rm -f $(NAME)

re: fclean all