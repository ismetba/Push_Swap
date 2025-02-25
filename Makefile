CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

LIBFTA = ./includes/ft_printf/Libft/libft.a

FT_PRINTFA = ./includes/ft_printf/libftprintf.a

NAME = push_swap

FT_PRINTF_SRCS =  includes/ft_printf/src/ft_putchar.c includes/ft_printf/src/ft_putstr.c includes/ft_printf/src/ft_putnbr.c includes/ft_printf/src/ft_putlnbr_base.c includes/ft_printf/src/ft_putunbr_base.c \
includes/ft_printf/src/ft_check_base.c includes/ft_printf/src/ft_string_format.c includes/ft_printf/src/ft_integer_format.c includes/ft_printf/src/ft_pointer_format.c includes/ft_printf/src/ft_unsigned_format.c \
includes/ft_printf/src/ft_hex_format.c includes/ft_printf/src/ft_printf.c includes/ft_printf/src/ft_helper.c


LIBFT_SRCS = includes/ft_printf/Libft/ft_lstnew.c includes/ft_printf/Libft/ft_lstadd_front.c includes/ft_printf/Libft/ft_lstsize.c includes/ft_printf/Libft/ft_lstlast.c \
includes/ft_printf/Libft/ft_lstadd_back.c includes/ft_printf/Libft/ft_lstdelone.c includes/ft_printf/Libft/ft_lstclear.c includes/ft_printf/Libft/ft_lstiter.c \
includes/ft_printf/Libft/ft_lstmap.c includes/ft_printf/Libft/ft_isalpha.c includes/ft_printf/Libft/ft_isdigit.c includes/ft_printf/Libft/ft_isalnum.c includes/ft_printf/Libft/ft_isascii.c \
includes/ft_printf/Libft/ft_isprint.c includes/ft_printf/Libft/ft_strlen.c includes/ft_printf/Libft/ft_memset.c includes/ft_printf/Libft/ft_bzero.c includes/ft_printf/Libft/ft_memcpy.c includes/ft_printf/Libft/ft_memmove.c \
includes/ft_printf/Libft/ft_strlcpy.c includes/ft_printf/Libft/ft_strlcat.c includes/ft_printf/Libft/ft_toupper.c includes/ft_printf/Libft/ft_tolower.c includes/ft_printf/Libft/ft_strchr.c \
includes/ft_printf/Libft/ft_strrchr.c includes/ft_printf/Libft/ft_strncmp.c includes/ft_printf/Libft/ft_memchr.c includes/ft_printf/Libft/ft_memcmp.c includes/ft_printf/Libft/ft_strnstr.c \
includes/ft_printf/Libft/ft_atoi.c includes/ft_printf/Libft/ft_calloc.c includes/ft_printf/Libft/ft_strdup.c includes/ft_printf/Libft/ft_substr.c includes/ft_printf/Libft/ft_strjoin.c \
includes/ft_printf/Libft/ft_strtrim.c includes/ft_printf/Libft/ft_split.c includes/ft_printf/Libft/ft_itoa.c includes/ft_printf/Libft/ft_strmapi.c includes/ft_printf/Libft/ft_striteri.c \
includes/ft_printf/Libft/ft_putchar_fd.c includes/ft_printf/Libft/ft_putstr_fd.c includes/ft_printf/Libft/ft_putendl_fd.c includes/ft_printf/Libft/ft_putnbr_fd.c

SRCS = src/push_swap.c src/utils/algorithm_util.c src/utils/conditions.c src/utils/ft_atoi_modified.c src/merge_algorithm/merge_algorithm.c \
src/instructions/p_instructions.c src/instructions/r_instructions.c src/instructions/rr_instructions.c src/instructions/s_instructions.c \
src/initialize/init_stacks.c src/error_handling/check_duplicate.c src/error_handling/check_is_sorted.c src/error_handling/check_validate.c src/error_handling/error_messages.c
 
FT_PRINTF_OBJS = ${FT_PRINTF_SRCS:.c=.o}

LIBFT_OBJS = ${LIBFT_SRCS:.c=.o}

OBJS = ${SRCS:.c=.o}

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${FT_PRINTF_OBJS} ${LIBFT_OBJS} ${OBJS} 
	$(MAKE) bonus -C ./includes/ft_printf
	$(CC) $(CFLAGS) $(OBJS) $(FT_PRINTFA) -o $(NAME)

clean:
	$(MAKE) clean -C includes/ft_printf
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	${RM} ${FT_PRINTFA} ${LIBFTA} 

re:
	fclean all

.PHONY:	all clean fclean re