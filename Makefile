# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jessy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 19:06:48 by jessy             #+#    #+#              #
#    Updated: 2020/11/30 21:49:57 by jdamoise         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_itoa.c  ft_memccpy.c ft_memchr.c\
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
		ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
		ft_substr.c ft_tolower.c ft_toupper.c\

SRCS_BONUS = 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			   	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\

OBJS = ${SRCS:.c=.o}

BONUS = ${SRCS:.c=.o} ${SRCS_BONUS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -c

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}

bonus:	${BONUS}
			ar -rc ${NAME} ${BONUS}

clean:
		${RM} ${OBJS} ${BONUS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY: clean all fclean re .c.o
