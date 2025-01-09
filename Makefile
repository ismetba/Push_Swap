ARG="124"

PATHS= src/*.c src/cost_calculating/*.c src/error_handling/*.c src/initialize/*.c src/instructions/*.c src/utils/*.c 

all:
	@gcc ${PATHS} includes/ft_printf/libftprintf.a -o push_swap
	@valgrind --leak-check=yes ./push_swap ${ARG}|| true