NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	ar rc libft.a $(OBJS) 
clean:
	$(RM) $(OBJS)
fclean:	clean
	$(RM) $(NAME)
re:	fclean	all
