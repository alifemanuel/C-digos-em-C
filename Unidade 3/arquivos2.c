#include <stdio.h>

#define N 10
#define LIN 100
#define COL 100

int main(void) {

    //Declaração de variáveis
    unsigned int i, j, k, n, lin, col; //Declaração das variáveis de auxílio de laço
    unsigned int c[N], M[LIN][COL]; //Declarando o vetor de controle de contagem

    //Abertura do arquivo (entrada)
    FILE *arq = fopen("dados.txt", "r");

    //Testando se o arquivo foi aberto
    if(arq == NULL) {
        printf("\nArquivo de entrada não aberto.");
        return 1;
    }

    printf("\nArquivo aberto!\n");

    //Leitura dos dados do arquivo
    fscanf(arq, "%u", &n);
    fscanf(arq, "%u %u", &lin, &col);
    for(i=0; i < lin; i++) {
        for(j=0; j < col; j++) {
            fscanf(arq, "%u", &M[i][j]);
        }
    }

    //Fechar arquivo
    fclose(arq);

    //Histograma (contagem de ocorrência de cada valor da matriz)
        //Inicializando o vetor c com todos os elementos iguais a zero
    for(i=0; i < n; i++) {
        c[i] = 0;
    }

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            k = M[i][j];
            c[k]++;
        }
    }
    //Exibição no terminal
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("Valor %u: %ux vezes\n", i, c[i]);
    }

    //Abertura do arquivo (saída)
    arq = fopen("histograma.txt", "w");

    if(arq == NULL) {
        printf("\nArquivo de saída não aberto.");
        return 1;
    }

    //Escrita dos dados de saída
    for(i = 0; i < n; i++) {
        fprintf(arq, "%u %u\n", i, c[i]);
    }

    //Fechar arquivo
    fclose(arq);

    return 0;
}