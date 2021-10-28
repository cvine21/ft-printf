NAME	=	libftprintf.a 

LIBFT	=	./libft/libft.a

SRCS	=	./srcs/ft_printf.c		./srcs/ft_putchar.c\
			./srcs/print_char.c		./srcs/print_str.c\
			./srcs/print_uint.c		./srcs/print_lowerx.c\
			./srcs/print_upperx.c	./srcs/print_integer.c\
			./srcs/print_p.c

HEADER	=	./includes/ft_printf.h

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc

RM		=	rm -f

CFLAGS	= 	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re 

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
	$(MAKE) -C ./libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean	:	clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re		:	fclean all