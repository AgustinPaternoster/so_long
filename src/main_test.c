#include "../inc/so_long.h"


int close_1(int keycode, t_game *game)
{
    mlx_destroy_window(game->mlx,game->mlx_win);
    return (0);
}


int main (int arc, char **argv)
{
    t_game newgame;


    newgame.mlx = mlx_init();
    newgame.mlx_win = mlx_new_window(newgame.mlx, 500 , 500 , "hola mundo");
    mlx_hook(newgame.mlx_win, 2 ,1L<<0, close_1 ,&newgame );
    mlx_loop(newgame.mlx);
    
}