#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void fn_chkarg(int arc, char **argv)
{
    int i;
    char *maps;

    if (arc != 2)
    {
        printf("Numero de parametros incorrectos\n");
        exit(1);
    }
    
    maps = argv[1];
    i = 0;
    while(maps[i] && maps[i] != '.')
        i++;
    if(maps[i + 1] == 'b' && maps[i + 2] == 'e' && maps[i + 3] == 'r' && maps[i + 4] == '\0')
    
	else
	{
        printf("Archivo incorrecto\n");
        exit(1);
    };
}

int main(int arc, char **argv)
{
	fn_chkarg(arc,argv);
	printf("ok");
	return(0);
}
