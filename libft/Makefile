# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 17:15:51 by enrgil-p          #+#    #+#              #
#    Updated: 2026/04/11 17:52:25 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
       ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
       ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
       ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
       ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strncmp.c\
       ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c\
       ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\
       get_next_line.c get_next_line_safe.c get_next_line_utils.c\
       ft_printf.c manage_chars.c manage_number.c\
       ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c\
       ft_lstsize.c free_first_node_and_content.c free_first_node.c\
       free_full_list_and_contents.c free_full_list.c\
       ft_putstr.c ft_putendl.c ft_putendl_error.c ft_putnbr.c\
       ft_isspace.c ft_issign.c ft_is_lower.c ft_is_upper.c\
       ft_strchr_digit.c\
       ft_atol.c ft_atoi_protected.c\
       ft_swap.c\
       free_strings_array.c free_string_and_null.c ft_split_whitespace.c\
       print_error.c
#
#				Is *.h needed here?
#				No, because a make clean would destroy it

OBJS = $(SRCS:.c=.o)


CFLAGS = -Wall -Wextra -Werror -g3
CC = cc 
RM = rm -f

all: $(NAME)
#				remember --> target: prerequisites
#						(tab) recipe

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) 	
	$(info CREATED $(NAME))	
#	First time I had put an -MD before $(CFLAGS, above). 
#	This modifier creates *.d, which explains a file dependencies	
	
clean:
	$(RM) $(OBJS)

#				fclean executes clean +  fclean recipe

compclean: all clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

#					Special target .phony
.PHONY: all clean fclean re compclean
