# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 10:26:33 by mchernyu          #+#    #+#              #
#    Updated: 2021/10/20 15:07:41 by mchernyu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MAN = ft_isdigit.c ft_memset.c ft_isprint.c ft_split.c\
ft_strlcat.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_atoi.c\
ft_itoa.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
ft_strmapi.c ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_MAN = ${patsubst %.c,%.o,${MAN}}

OBJS_BONUS =${patsubst %.c,%.o,${BONUS}}

HEADER = ${patsubst %.c,%.d,${MAN} ${BONUS}}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): ${OBJS_MAN}
	ar rcs ${NAME} $?

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -MD

include ${wildcard ${HEADER}}

bonus:
	make OBJS_MAN="${OBJS_BONUS}" all

clean:
	rm -f ${OBJS_MAN} ${OBJS_BONUS} ${HEADER}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re bonus
