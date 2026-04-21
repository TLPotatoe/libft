# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 14:16:18 by fmurat--          #+#    #+#              #
#    Updated: 2026/04/21 14:56:32 by tlamit           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = libft.a



DIR_ARRAY		:= array
DIR_FTPRINTF	:= ft_printf
DIR_GNL			:= get_next_line
DIR_IS			:= is
DIR_LST			:= lst
DIR_MATH		:= math
DIR_MEM			:= mem
DIR_POINTER		:= pointer
DIR_PUT			:= put
DIR_READER		:= reader
DIR_STR			:= str
DIR_STRARR		:= strarray

HEADER :=	-I . \
			-I $(DIR_ARRAY) \
			-I $(DIR_FTPRINTF) \
			-I $(DIR_GNL) \
			-I $(DIR_IS) \
			-I $(DIR_LST) \
			-I $(DIR_MATH) \
			-I $(DIR_MEM) \
			-I $(DIR_POINTER) \
			-I $(DIR_PUT) \
			-I $(DIR_READER) \
			-I $(DIR_STR) \
			-I $(DIR_STRARR)


SRCS_ARRAY :=	$(DIR_ARRAY)/ft_arraylen.c \
				$(DIR_ARRAY)/ft_freearray.c


SRCS_PRINTF :=	$(DIR_FTPRINTF)/ft_printf.c \
				$(DIR_FTPRINTF)/ft_printf_utils.c \
				$(DIR_FTPRINTF)/ft_strchr.c \
				$(DIR_FTPRINTF)/ft_strlcpy.c \
				$(DIR_FTPRINTF)/ft_strlen.c \
				$(DIR_FTPRINTF)/ft_substr.c \
				$(DIR_FTPRINTF)/put_any_fd.c


SRCS_GNL :=		$(DIR_GNL)/get_next_line.c \
				$(DIR_GNL)/get_next_line_utils.c


SRCS_IS :=		$(DIR_IS)/ft_isalnum.c \
				$(DIR_IS)/ft_isalpha.c \
				$(DIR_IS)/ft_isascii.c \
				$(DIR_IS)/ft_isdigit.c \
				$(DIR_IS)/ft_isprint.c \
				$(DIR_IS)/ft_isspace.c


SRCS_LST :=		$(DIR_LST)/ft_lstadd_back.c \
				$(DIR_LST)/ft_lstadd_front.c \
				$(DIR_LST)/ft_lstclear.c \
				$(DIR_LST)/ft_lstdelone.c \
				$(DIR_LST)/ft_lstiter.c \
				$(DIR_LST)/ft_lstlast.c \
				$(DIR_LST)/ft_lstmap.c \
				$(DIR_LST)/ft_lstnew.c \
				$(DIR_LST)/ft_lstsize.c


SRCS_MATH :=	$(DIR_MATH)/ft_min.c
SRCS_MEM :=		$(DIR_MEM)/ft_bzero.c \
				$(DIR_MEM)/ft_calloc.c \
				$(DIR_MEM)/ft_memchr.c \
				$(DIR_MEM)/ft_memcmp.c \
				$(DIR_MEM)/ft_memcpy.c \
				$(DIR_MEM)/ft_memmove.c \
				$(DIR_MEM)/ft_memset.c


SRCS_POINTER :=	$(DIR_POINTER)/ft_swap_free.c
SRCS_PUT :=		$(DIR_PUT)/ft_putchar_fd.c \
				$(DIR_PUT)/ft_putendl_fd.c \
				$(DIR_PUT)/ft_putnbr_fd.c \
				$(DIR_PUT)/ft_putstr_fd.c


SRCS_READER := 	$(DIR_READER)/reader.c
SRCS_STR :=		$(DIR_STR)/ft_atoi.c \
				$(DIR_STR)/ft_itoa.c \
				$(DIR_STR)/ft_split.c \
				$(DIR_STR)/ft_strchr.c \
				$(DIR_STR)/ft_strdup.c \
				$(DIR_STR)/ft_striteri.c \
				$(DIR_STR)/ft_strjoin.c \
				$(DIR_STR)/ft_strlcat.c \
				$(DIR_STR)/ft_strlcpy.c \
				$(DIR_STR)/ft_strlen.c \
				$(DIR_STR)/ft_strmapi.c \
				$(DIR_STR)/ft_strncmp.c \
				$(DIR_STR)/ft_strnstr.c \
				$(DIR_STR)/ft_strrchr.c \
				$(DIR_STR)/ft_strtrim.c \
				$(DIR_STR)/ft_substr.c \
				$(DIR_STR)/ft_tolower.c \
				$(DIR_STR)/ft_toupper.c \
				$(DIR_STR)/ft_remchr.c \
				$(DIR_STR)/ft_strreplace.c \
				$(DIR_STR)/ft_strsspace.c \
				$(DIR_STR)/ft_strsplit.c \
				$(DIR_STR)/ft_strinsert.c


SRCS_STRARR :=	$(DIR_STRARR)/ft_newstrarrayinsert.c \
				$(DIR_STRARR)/ft_strarraydup.c \
				$(DIR_STRARR)/ft_strarrayinsert.c \
				$(DIR_STRARR)/ft_strarraydel.c

SRCS := 		$(SRCS_ARRAY) \
				$(SRCS_PRINTF) \
				$(SRCS_GNL) \
				$(SRCS_IS) \
				$(SRCS_LST) \
				$(SRCS_MATH) \
				$(SRCS_MEM) \
				$(SRCS_POINTER) \
				$(SRCS_PUT) \
				$(SRCS_READER) \
				$(SRCS_STR) \
				$(SRCS_STRARR)


OBJS := $(SRCS:.c=.o)

ifndef DEBUG
	CFLAGS := -Wall -Wextra -Werror -g $(HEADER)
else
	CFLAGS := -g $(HEADER)
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
