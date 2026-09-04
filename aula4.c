#include <stdio.h>

int main () {

    // Questão 1 - Escreva um algoritmo e um programa que leia três inteiros diferentes do teclado, depois 
    //apresente a soma, a média, o produto, o menor e o maior desses números.

    // int int1, int2, int3;

    // printf("Escreva três inteiros diferentes: \n");
    // scanf("%d %d %d", &int1, &int2, &int3);

    // int soma = (int1 + int2 + int3);
    // int media = (soma/3);


    // printf("A soma é %d\n", soma);
    // printf("A média é %d\n", media);
    // printf("O produto é %d\n", int1*int2*int3);

    // if((int1 < int2) && (int1 < int3)) {
    //     printf("O menor valor é %d", int1);
    // } else if ((int2 < int1) && (int2 < int3)) {
    //     printf("O menor valor é %d", int2);
    // } else if ((int3 < int1) && (int3 < int2)) {
    //     printf("O menor valor é %d", int3);
    // }
    // return 0;

    //Questão 2 - Escreva um algoritmo e um programa que leia um inteiro, determine e imprima se ele é par ou 
    //ímpar. Dica: use o operador módulo. Um número par é um múltiplo de dois. Qualquer múltiplo de 
    //dois gera resto zero quando dividido por 2.

    // int numero;
    // printf("Digite um número inteiro: \n");
    // scanf("%d", &numero);

    // if ((numero%2) != 0) {
    //     printf("O número %d é ímpar.", numero);
    // } else {
    //     printf("O número %d é par.", numero);
    // }

    // return 0;

    //Questão 3 - Faça um algoritmo e um programa que receba três notas, calcule e mostre a média aritmética e a 
    //mensagem que consta na tabela abaixo apresentada. Inclua, no código, testes e ajustes para que não 
    //ocorra a digitação de notas menores que 0 e maiores que 100.

    int nota1, nota2, nota3;
    int soma = nota1 + nota2 + nota3;
    int media = soma/3;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    while ((nota1 < 0) || (nota1 > 100)) {
        printf("Digite a primeira nota: \n");
        scanf("%d", &nota1);
    }

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    while ((nota2 < 0) || (nota2 > 100)) {
        printf("Digite a segunda nota: \n");
        scanf("%d", &nota2);
    }

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    while ((nota3 < 0) || (nota3 > 100)) {
        printf("Digite a terceira nota: \n");
        scanf("%d", &nota3);
    }

    // Resultado
    printf("");

    return 0;
}