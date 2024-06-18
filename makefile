CC = gcc
INCLUDE = -I ./inc/
CFLAGS = -Wall -Werror -Wextra
CFILES = main.c\
		get_next_line_utils.c\
		get_next_line.c
SRC_DIR = src/
SRC_FILES = $(addprefix $(SRC_DIR),$(CFILES))
NAME = so_long
GNLFILES = get_next_line/ 

OBJS = $(SRC_FILES:%.c=%.o)




all : $(NAME)

$(SRC_DIR)%.o : $(SRC_DIR)%.c inc/so_long.h
		$(CC) $(INCLUDE) -I/usr/include -Imlx_linux -O3 -c $< -o $@ 

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)


clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all