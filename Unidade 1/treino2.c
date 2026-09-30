#include <stdio.h>

int main () {
    int nota, soma_notas, media, n;
    n = 1;
    media = 0;
    soma_notas = 0;

    while (n <= 3) {
        printf("Digite a nota (%d): ", n);
        scanf("%d", &nota);

        if((nota < 0) || (nota > 100)) {
            continue;
        }
        n = n+1;
        soma_notas = soma_notas + nota;
    }
    media = soma_notas/(n-1);
    printf("A média das notas é: %d", media);
}