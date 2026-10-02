#include <stdio.h>

int quantidade_pares = 0;

int verificar_pares(int i) {
    if (i % 2 == 0) {
        quantidade_pares++;
    }
    return quantidade_pares;
}

int main () {
    int i = 0;

    while (1) {
        printf("Digite um número inteiro e positivo: \n");
        scanf("%d", &i);

        if (i < 0) {
            printf("\n");
            printf("Quantidade de pares digitados: %d \n", quantidade_pares);
            printf("Programa encerrado. \n");
            break;
        }
        verificar_pares(i);
    }

    return 0;
}