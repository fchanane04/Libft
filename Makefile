# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 20:56:21 by fchanane          #+#    #+#              #
#    Updated: 2021/11/29 23:05:08 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS	= libft.h

NAME	=	libft.a

CC		=	gcc

CFLAGS	= -Wall -Werror -Wextra

RM		=	rm -rf

SRC = 	ft_isalpha.c\
      	ft_putendl_fd.c\
      	ft_memmove.c\
    	  ft_strlcpy.c\
        ft_strtrim.c\
     	  ft_isascii.c\
        ft_memset.c\
        ft_strdup.c\
        ft_substr.c\
      	ft_atoi.c\
        ft_isdigit.c\
        ft_strjoin.c\
        ft_tolower.c\
      	ft_itoa.c\
      	ft_bzero.c\
        ft_isprint.c\
        ft_putchar_fd.c\
      	ft_putnbr_fd.c\
      	ft_putstr_fd.c\
        ft_strlen.c\
        ft_toupper.c\
      	ft_calloc.c\
        ft_memchr.c\
        ft_split.c\
        ft_strncmp.c\
      	ft_memcmp.c\
        ft_strlcat.c\
        ft_strnstr.c\
      	ft_isalnum.c\
        ft_memcpy.c\
        ft_strchr.c\
        ft_strrchr.c\
      	ft_strmapi.c\
      	ft_striteri.c\

BONUS_SRCS  = ft_lstadd_back_bonus.c\
              ft_lstadd_front_bonus.c\
              ft_lstclear_bonus.c\
              ft_lstdelone_bonus.c\
              ft_lstiter_bonus.c\
              ft_lstlast_bonus.c\
              ft_lstnew_bonus.c\
              ft_lstsize_bonus.c\
			        ft_lstmap_bonus.c\


OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

AR  = ar -rc

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(AR) $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus : $(OBJ) $(BONUS_OBJ) $(HEADERS)
	@$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

