#ifndef SO_LONG_H
#define SO_LONG_H

#include <unistd.h>
#include <mlx.h>
#include <stdlib.h>
#include <X11/keysym.h>
#include "get_next_line.h"
#include <stdio.h>
#include "../printf/ft_printf.h"

#define TEXTURE_SIZE 32

typedef struct s_game
{
    void *mlx;
    void *mlx_win;
    int hegiht;
    int width;

} t_game;

int fn_chkext(char *maps);
#endif


