#include "../inc/so_long.h"

int fn_chkfile(int arc, char **argv)
{
    int i;

    
    i = 0;
    while(maps[i] && maps[i] != '.')
        i++;
    if(maps[i + 1] == 'b' && maps[i + 2] == 'e' && maps[i + 3] == 'r' && maps[i + 4] == '\0')
        return (1);
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