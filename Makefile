

PATHS= src/*.c src/merge_algorithm/*.c src/error_handling/*.c src/initialize/*.c src/instructions/*.c src/utils/*.c 

all:
	@gcc ${PATHS} includes/ft_printf/libftprintf.a -o push_swap