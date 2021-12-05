# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 23:00:08 by yel-aoun          #+#    #+#              #
#    Updated: 2021/11/27 15:55:55 by yel-aoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c  ft_isascii.c ft_memchr.c  ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
	   ft_isalnum.c ft_isdigit.c ft_memcmp.c  ft_memset.c  ft_strlcpy.c ft_strnstr.c ft_toupper.c \
	   ft_atoi.c    ft_isalpha.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlen.c  ft_strrchr.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	   ft_putchar_fd.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

%.o: %.c
	cc $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

$(NAME): $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
