#include <stdio.h>

int main()
{
    char letra;
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("\nA letra e numero digitados foram %c e %d", letra, numero);

	return 0;
}
