#ifndef SO_LONG_H
#define SO_LONG_H

#include <unistd.h>
#include <mlx.h>
#include <stdlib.h>
#include <X11/keysym.h>
#include "get_next_line.h"

#define TEXTURE_SIZE 32

typedef struct t_game
{
    void *mlx;
    void *mlx_win;
} t_game;

#endif


