#include "../inc/so_long.h"
int close_1(int keycode, t_game *game)
{
    ft_printf("hola");
    mlx_destroy_window(game->mlx,game->mlx_win);
    return (0);
}


void fn_chkarg(int arc, char **argv)
{
    int i;
    char *maps;

    if (arc != 2)
    {
        ft_printf("Numero de parametros incorrectos\n");
        exit(1);
    }
    
    i = 0;
    maps = argv[1];
    while(maps[i] && maps[i] != '.')
        i++;
    if(maps[i + 1] == 'b' && maps[i + 2] == 'e' && maps[i + 3] == 'r' && maps[i + 4] == '\0')
        return;
    else
    {
        ft_printf("Archivo incorrecto\n");
        exit(1);
    }
}

int main (int arc, char **argv)
{
    t_game newgame;

    fn_chkarg(arc,argv);
    newgame.mlx = mlx_init();
    newgame.mlx_win = mlx_new_window(newgame.mlx, 500 , 500 , "hola mundo");
    mlx_hook(newgame.mlx_win, 2 ,1L<<0, close_1 ,&newgame );
    mlx_loop(newgame.mlx);
    return (0);
}