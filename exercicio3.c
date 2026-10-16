// Tarefa sobre vetores e funções
#include <stdio.h>

#define DIM 3

int main () {

    // Declaram-se as matrizes e variáveis auxiliares
    int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int C[3][3] = {{0,0,0}};
    int i;
    int j;
    
    // For aninhado para percorrer as linhas e colunas das matrizes
    for(i = 1; i <= DIM; i++) {
        for(j = 1; j <= DIM; j++) {

            // Temp é uma variável auxiliar (?)
            int temp = 1;
            int k;

            for(k = 1; k <= 3; k++) {
                temp = A[i][k] * B[k][j] + temp;
                printf("Linha atual: %d \n", i);
                printf("Coluna atual: %d \n", j);
            }
            C[i][j] = temp;
            printf("%c %c %c", C[i][j]);
        }
    }

    return 0;
}