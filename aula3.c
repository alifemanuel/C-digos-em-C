#include <stdio.h>

int main () {

    // int idade;

    // printf("Digite sua idade: ");
    // scanf("Digite sua idade: %d", &idade);

    // if (idade == 20) {
    //     printf("Sua idade é %d anos.\n", idade);
    // } else {
    //     printf("Sua idade é diferente de 20.");
    // }
    // return 0;

    int sum = 0;
    int i = 0;
    int N;

    printf("Digite o valor máximo de N: ");
    scanf("%d", &N);

    while (i<=N) {
        sum = sum + i;
        i = i+1;
    }

    printf("O somatório é: %d ", sum);
}