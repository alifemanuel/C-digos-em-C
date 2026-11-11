#include <stdio.h>

#define LIN 10
#define COL 10


int main(void) {
    
    //Variáveis
    unsigned int i, j, temp, lin, col;
    unsigned int M[LIN][COL], A[400];
    FILE *arquivo;

    //Atribuição de valores para M
    for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            M[i][j] = i + j;
        }
    }

    //Exibindo M
    printf("Matriz M:\n\n");
    for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            printf("%3u ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    

    //Abertura do arquivo
    arquivo = fopen("matriz_binaria.bin", "wb");

    //Verificação de falha na abertura do arquivo
    if(arquivo == NULL) {
        printf("\nHouve um erro na abertura do arquivo binário! (1)\n");
        return 1; //Sai do programa
    }

    //Escrevendo os dados no documento
    temp = LIN;
    fwrite(&temp, sizeof(unsigned int), 1, arquivo);
    temp = COL;
    fwrite(&temp, sizeof(unsigned int), 1, arquivo);

    fwrite(M, sizeof(unsigned int), LIN*COL, arquivo);

    //Fechando o arquivo
    fclose(arquivo);

    //-----------------------------------------------------Lendo o arquivo-----------------------------------------------------
    //Abertura do arquivo
    arquivo = fopen("matriz_binaria.bin", "rb");
    
    //Verificação de falha na abertura do arquivo
    if(arquivo == NULL) {
        printf("\nHouve um erro na abertura do arquivo binário! (2)\n");
        return 1; //Sai do programa
    }

    //Leitura dos dados
    fread(&lin, sizeof(unsigned int), 1, arquivo);
    printf("\nLinha %u", lin);
    fread(&col, sizeof(unsigned int), 1, arquivo);
    printf("\nColuna: %u", col);

    fread(A, sizeof(unsigned int), (size_t)lin*col, arquivo);

    fclose(arquivo);
    
    //Exibindo A
    printf("\n\nMatriz A:\n\n");
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("%3u ", A[i+j*col]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}