# COMPILER #
CC      = cc
CCFLAGS = -Wall -Wextra -Werror -std=c99
AR      = ar -rcs
RM      = rm -rf

# SOURCE #
SRCSFILE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c ft_memmove.c ft_memcpy.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcpy.c ft_strlcat.c

OBJS = $(SRCSFILE:.c=.o)
HEADER = libft.h
NAME = libft.a

# RULE #

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CCFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
