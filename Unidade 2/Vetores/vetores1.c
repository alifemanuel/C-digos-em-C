#include <stdio.h>

int main()
{
    int notas[5];
    int i, soma;

    for (i = 0; i < 6; i++){
        printf("Digite a nota do aluno %d (entre 0 e 100): ", i);
        scanf("%d", &notas[i]);
    }
    soma = 0;
    for (i = 0; i < 5; i++)
        soma = soma + notas[i];

    printf("Media das notas: %d", soma / 5);

    return 0;
}
