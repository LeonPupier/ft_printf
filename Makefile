NAME	=	libftprintf.a
CFLAGS	=	-Wall -Wextra -Werror

HEADERS	=	ft_printf.h 
SRCS	=	libft.a \
			ft_printf.c \
			ft_display_arg.c \
			ft_functions.c \

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADERS) Makefile
			$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re