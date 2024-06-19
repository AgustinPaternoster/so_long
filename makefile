CC = gcc
INCLUDE = -I ./inc/
CFLAGS = -Wall -Werror -Wextra
CFILES = main.c\
		get_next_line_utils.c\
		get_next_line.c\
		fn_utilities.c\
		fn_maps.c
SRC_DIR = src/
SRC_FILES = $(addprefix $(SRC_DIR),$(CFILES))
NAME = so_long
OBJS = $(SRC_FILES:%.c=%.o)
PRINTF = printf/libftprintf.a


all : $(NAME)

$(SRC_DIR)%.o : $(SRC_DIR)%.c inc/so_long.h
		$(CC) $(INCLUDE) -g -I/usr/include -Imlx_linux -O3 -c $< -o $@ 

$(NAME) : $(OBJS)
		@make -C printf
		$(CC) $(OBJS) $(PRINTF) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)


clean :
	make clean -C printf
	rm -f $(OBJS)

fclean : clean
	make fclean -C printf
	rm -f $(NAME)

re: fclean all