NAME = libftprintf.a

SRCS =  src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c src/ft_putlnbr_base.c src/ft_putunbr_base.c \
 	src/ft_check_base.c src/ft_string_format.c src/ft_integer_format.c src/ft_pointer_format.c src/ft_unsigned_format.c \
	src/ft_hex_format.c src/ft_printf.c src/ft_helper.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rcs


all: ${NAME}

${NAME}: ${OBJS} $(MAKE) bonus -C ./Libft
	$(MAKE) bonus -C ./Libft
	cp ./Libft/libft.a $(NAME)
	${AR} ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
bonus: all
	

clean:
	$(MAKE) clean -C ./Libft
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 
	${RM} ./Libft/libft.a

re: fclean all

.PHONY:	all clean fclean re bonus
