#include <stdio.h>
#include <string.h>

#define LINHAS 100
#define CARACTERES 80

char text[LINHAS][CARACTERES];

int main()
{
    int t, i, j;

    printf("Digite um texto de ateh 100 linhas!\n");
    printf("(digite uma linha vazia para sair)\n");

    for( t=0; t<LINHAS; t++)
    {
        printf("%d: ", t);
        fgets(text[t], CARACTERES, stdin);
        if(strlen(text[t]) == 1) break; /* sair com linha em branco */
    }

    for( i=0; i<t; i++)
        for( j=0; text[i][j]; j++)
            putchar(text[i][j]);

    return 0;
}
