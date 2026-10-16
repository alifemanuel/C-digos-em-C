#include <stdio.h>

int main()
{
    char str[80];
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &i);

    printf("Digite uma string: ");
    //scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    printf("Voce digitou: %s e %d\n", str, i);

    return 0;
}
