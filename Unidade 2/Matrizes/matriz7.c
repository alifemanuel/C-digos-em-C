#include <stdio.h>

int main()
{
    char str1[80], str2[80];
    char ch;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &i);
    getchar();

    printf("Digite um caractere: ");
    scanf("%c", &ch);
    getchar();

    printf("Digite uma string: ");
    scanf("%s", str1);
    getchar();

    printf("Digite outra string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Numero: %d\n", i);
    printf("Caractere: %c\n", ch);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    return 0;
}
