# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 12:58:26 by gcollet           #+#    #+#              #
#    Updated: 2022/02/06 10:04:07 by gcollet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	= ft_isalnum.c ft_isdigit.c ft_memccpy.c ft_memcpy.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c\
		ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memchr.c\
		ft_memmove.c ft_putendl_fd.c ft_split.c ft_strjoin.c ft_strlen.c\
		ft_strnstr.c ft_substr.c ft_atoi.c ft_calloc.c ft_isascii.c ft_itoa.c\
		ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strlcat.c\
		ft_strmapi.c ft_strrchr.c ft_tolower.c ft_atof.c
OBJS 	= ${SRCS:.c=.o}
SRCS_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS_B	= ${SRCS_B:.c=.o}
HEADER	= ./

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:		%.o : %.c
					@${CC} ${CFLAGS} -I ${HEADER} -c $< -o $(<:.c=.o)

$(NAME):	${OBJS}
					@ar rc ${NAME} ${OBJS}

all: 		${NAME}

bonus:		${OBJS} ${OBJS_B}
					@ar rc ${NAME} ${OBJS} ${OBJS_B}

clean:
					@rm -f ${OBJS} ${OBJS_B}

fclean: 	clean
					@rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re bonus