#include <stdio.h>

int main () {
    int I, A, B, C;
    int menor, meio, maior;

    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &I);

    while ((I!=1) && (I!=2) && (I!=3)) {
        printf("Digite o valor de I (1, 2 ou 3): ");
        scanf("%d", &I);
    }

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    while (B == A) {
        printf("Digite o valor de B diferente do valor de A: ");
        scanf("%d", &B);
    }

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    while ((C == A) || (C == B)) {
        printf("Digite o valor de C diferente do valor de A e B: ");
        scanf("%d", &C);
    }

    maior = A;
    menor = A;

    if (B > maior) {
        maior = B;
    }
    if (B < menor) {
        menor = B;
    }

    if(C > maior) {
        maior = C;
    }
    if(C < menor) {
        menor = C;
    }

    //Agora verifiquemos o número do meio

    if ((A > menor) && (A < maior)) {
        meio = A;
    }
    if ((B > menor) && (B < maior)) {
        meio = B;
    }
    if ((C > menor) && (C < maior)) {
        meio = C;
    }

    if(I == 1) {
        printf("%d %d %d", menor, meio, maior);
    }
    if(I == 2) {
        printf("%d %d %d", maior, meio, menor);
    }
    if(I == 3) {
        printf("%d %d %d", menor, maior, meio);
    }
}