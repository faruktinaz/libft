# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 22:54:12 by ogenc             #+#    #+#              #
#    Updated: 2022/12/22 14:38:35 by ogenc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list=ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strnstr.c \
		ft_itoa.c \
		ft_calloc.c \
		#  ft_strnstr.c \
		


OBJS = $(list:.c=.o)
bonusobj = $(bonuslist:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

.c.o:
	$(CC) -c $(CFLAGS) $<

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(bonusobj)

fclean: clean
	rm -f $(NAME)

re:fclean $(NAME)

bonus:  $(bonusobj) $(OBJS)
	ar -rcs $(NAME) $(bonusobj) $(OBJS)

norm:
	norminette *.[ch]
.PHONY: clean fclean all re bonus norm

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)