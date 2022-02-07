
CFLAGS = -Wall -Wextra -Werror
CC = gcc
HEADER = header.h
FCTS = ft_printf.c \
	ft_putnbr_fd.c \
	putnbr_u.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	prnthex.c
OBJS = $(FCTS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# $(OBJS): $(FCTS)
# 	$(CC) $(FLAGS) -c $(FCTS)

# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all