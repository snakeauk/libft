NAME	= libft.a
CC		= gcc
AR		= ar
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

SRCS	=	ft_isprint.c ft_putstr_fd.c ft_strncmp.c ft_itoa.c ft_split.c ft_strnstr.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_memcmp.c ft_strdup.c ft_strtrim.c ft_bzero.c ft_memcpy.c ft_striteri.c ft_substr.c ft_calloc.c ft_memmove.c ft_strjoin.c ft_tolower.c ft_isalnum.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalpha.c ft_putchar_fd.c ft_strlcpy.c ft_isascii.c ft_putendl_fd.c ft_strlen.c ft_isdigit.c ft_putnbr_fd.c ft_strmapi.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re