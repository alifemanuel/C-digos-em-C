#include <stdio.h>

int main () {
    int media, n, soma_idades, idade;
    n = 1;
    soma_idades = 0;
    media = 0;

    while (n <= 3) {
        printf("Digite a idade (%d): \n", n);
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        n=n+1;
        soma_idades = soma_idades + idade;
    }

    media = soma_idades/(n-1);
    printf("A média das idades é: %d", media);
}