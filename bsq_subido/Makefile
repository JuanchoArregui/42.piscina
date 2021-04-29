# Define the name of the executable file.
NAME = bsq

# Define files to include
SRC =	main.c \
		fn_map_check_valid.c \
		fn_map_read.c \
		fn_map_check_open.c \
		ft_atoi.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_stdin.c \
		ft_isnumeric.c \
		ft_isprintable.c \
		fn_strtomap.c \

INCS = headers.h
		

		

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra ${SRC} -o $(NAME) -I${INCS}

fclean:
	rm -f $(NAME)

re: fclean all




