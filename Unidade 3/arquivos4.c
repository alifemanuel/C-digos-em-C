#include <stdio.h>

#define LIN 256
#define COL 256
#define STR_LEN 128
#define MAX_VALOR 256

int main (void) {

    //Declaração de variáveis
    FILE *arq;
    unsigned int max_valor, linha, coluna, i, j, I[LIN][COL];
    unsigned int h[MAX_VALOR] = {0};
    char str[STR_LEN];

    //Abrindo o arquivo de imagem
    arq = fopen("pepper.ascii.pgm", "r");

    //Verificando se a abertura deu erro
    if (arq == NULL) {
        perror("Erro na abertura do arquivo de imagem (1).");
        return 1;
    }

    //-------------------------------------------------------- Leitura do arquivo de imagem --------------------------------------------------------
    //Leitura do número mágico
    fgets(str, STR_LEN, arq);
    printf("%s", str);

    //Leitura do comentário
    fgets(str, STR_LEN, arq);
    printf("%s", str);

    //Leitura da dimensão
    fscanf(arq, "%u %u", &coluna, &linha);
    printf("%u %u\n", coluna, linha);

    //Leitura do valor máximo
    fscanf(arq, "%u", &max_valor);
    printf("%u\n", max_valor);

    //Leitura dos elementos
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            fscanf(arq, "%u", &I[i][j]);
        }
    }

    printf("\nElementos lidos!");

    //FECHANDO O ARQUIVO!!
    fclose(arq);

    //Histograma
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            h[I[i][j]]++;
        }
    }

    //Abrindo o arquivo de histograma
    arq = fopen("histograma_imagem.txt", "w");

    //Verificando se a abertura deu erro
    if (arq == NULL) {
        perror("Erro na abertura do arquivo de histograma (2).");
        return 1;
    }

    //Imprimindo cada valor no arquivo
    for(i = 0; i < max_valor; i++) {
        fprintf(arq, "%u %u\n", i, h[i]);
    }

    //Fechando o arquivo
    fclose(arq);

    return 0;
}