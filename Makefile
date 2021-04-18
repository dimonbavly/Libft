NAME = libft.a
SRCS = ft_memset.c 
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRCS) -o $(OBJS)
	ar rc libft.a $(OBJS) 
clean:
	$(RM) $(OBJS)
fclean:	clean
	$(RM) $(NAME)
re:	fclean	all





