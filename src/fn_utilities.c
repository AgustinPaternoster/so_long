#include "../inc/so_long.h"

int fn_chkfile(char *maps)
{
    int i;

    i = 0;
    while(maps[i] && maps[i] != '.')
        i++;
    if(maps[i + 1] == 'b' && maps[i + 2] == 'e' && maps[i + 3] == 'r' && maps[i + 4] == '\0')
        return (1);
    return (0);
}