#include <stdio.h>

int main() {

    printf("Hello, World! Bem-vindo a C!\n");

    // Declarando as variáveis inteiras
    int inteiro1;
    int inteiro2;
    int soma;

    printf("Digite o primeiro número inteiro: ");
    // Exigindo entrada do usuário - scanf
    scanf("%d", &inteiro1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &inteiro2);

    // Declarando a equação da soma
    soma = inteiro1 + inteiro2;

    // Exibindo o resultado na tela
    printf("A soma é: %d\n", soma);

    return 0;
}