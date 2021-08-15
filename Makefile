# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 20:29:17 by qduong            #+#    #+#              #
#    Updated: 2021/08/15 09:20:50 by vfuhlenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_putstr_fd.c ft_strlen.c ft_tolower.c ft_toupper.c\

OBJS = ${SRCS:.c=.o} #makes *.o from *.c
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
RM = rm -f
CC = gcc

all: $(NAME)

#git add:
#	git add $(SRCS) $(BONUS_SRCS)

#.c.o:
# ${CC}	${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean:
	${RM} ${OBJS} $(BONUS_OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY:	all clean fclean re

no:
	norminette $(SRCS) $(BONUS_SRCS)
	
bonus:${BONUS_OBJS}
	ar rcs ${NAME} ${BONUS_OBJS}

so:
	$(CC) -fPIC $(CFLAGS) -c $(SRCS) $(BONUS_SRCS)
	gcc -shared -o libft.so $(OBJS) $(BONUS_OBJS)