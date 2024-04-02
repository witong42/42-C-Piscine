NAME = libft.a

DS = srcs/

SRCS = $(DS)ft_putchar.c $(DS)ft_swap.c $(DS)ft_putstr.c $(DS)ft_strlen.c $(DS)ft_strcmp.c

OBJS = $(SRCS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I includes/

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
