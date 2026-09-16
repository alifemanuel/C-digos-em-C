#include <stdio.h>

int main() {
    int i, n, soma_pares, maior, menor;
    soma_pares = 0;
    i = 0;
    n = 2;
    menor = 0;
    maior = 0;

    printf("Digite um inteiro positivo e não-nulo (1): \n");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Programa finalizado. \n");
    }

    if (i % 2 == 0) {
        maior = i;
        menor = i;
        soma_pares = soma_pares + i;
    }

    // n = 5 é a quantidade de somas escolhidas para acontecer
    while ((n <= 5) && (i > 0)) {
        printf("Digite um inteiro postivo e não nulo (%d): \n", n);
        scanf("%d", &i);

        if (i % 2 == 0) {
            soma_pares = soma_pares + i;
        }

        if ((i < menor) && (i % 2 == 0)) {
            menor = i;
        }
        if (i > maior && (i % 2 == 0)) {
            maior = i;
        }

        n = n + 1;
    }

    printf("A soma de todos os pares é: %d \n", soma_pares);
    printf("O menor valor par digitado é: %d \n", menor);
    printf("O maior valor par digitado é: %d \n", maior);
}