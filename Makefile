NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c  ft_isdigit.c \
	ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	ar rcs libft.a $(OBJS) 
clean:
	$(RM) $(OBJS) $(BONUSOBJS) $(MYLIBFT_OBJS)
fclean:	clean
	$(RM) $(NAME)
re:	fclean	all

#==========================================
#=================BONUS====================
#==========================================

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c ft_lstlast.c \
	ft_lstclear.c ft_lstsize.c ft_lstdelone.c

BONUSOBJS = $(BONUS:%.c=%.o)

bonus:	$(OBJS) $(BONUSOBJS)
	ar rcs $(NAME) $(OBJS) $(BONUSOBJS)

#=========================MYLIBFT=============================================

MYLIBFT_SRCS = ft_dlclearall.c ft_dlclearthead.c ft_dlclearttail.c ft_dlhead.c\
			   ft_dltail.c ft_dlinsertafter.c ft_dlinsertbefore.c\
			   ft_dllstdelone.c ft_dllstnew.c ft_dllstsize.c ft_abs.c

MYLIBFT_OBJS = $(MYLIBFT_SRCS:%.c=%.o)

mylibft:	bonus $(MYLIBFT_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUSOBJS) $(MYLIBFT_OBJS)
