#include <stdio.h>
#include <string.h>

#define TAM 80

int main()
{
    char s1[TAM], s2[TAM];

    fgets(s1, TAM, stdin);

    fgets(s2, TAM, stdin);

    printf("comprimentos: %d e %d\n", strlen(s1), strlen(s2));

    if( strcmp(s1, s2)==0 )
        printf("As strings sao iguais!\n");
    else
        printf("As strings sao diferentes!\n");

    strcat(s1, s2);
    printf("%s\n", s1);

    strcpy(s1, "Isso eh um teste!\n");
    printf(s1);

    strcpy(s2, "DCA3101 - Algoritmos e Logica de Programacao");
    if(strchr(s2, 'A'))
        printf("Caractere 'A' estah em: %s\n", s2);
    if(strstr(s2, "Algoritmos"))
        printf("'Algoritmos' estah em: %s\n", s2);

    return 0;
}
