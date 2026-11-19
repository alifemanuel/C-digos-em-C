/*

UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE
Aluno: Alif Emanuel Silva Sobrinho (20260008330)
Turma: Algoritmos e Lógica de Programação (46M56)

Tarefa - Unidade 3 (19/11/2026)
*/

#include <stdio.h>

#define LIN 640
#define COL 480
#define MAX_VALOR 256
#define STR

//Declarando as variáveis em um struct "Imagem"
typedef struct {
    unsigned int linha;
    unsigned int coluna;
    unsigned int max_valor;
    unsigned int h[MAX_VALOR] = {0};
    unsigned int I[LIN][COL];
    unsigned int G[LIN][COL];
    char str[STR_LEN];
} Imagem;

int main(void) {
    
    unsigned int i, j, linha, coluna, I[LIN][COL], G[LIN][COL];

    FILE *img; //Define-se o ponteiro para o arquivo.

    img = fopen("baboon.ascii.pgm", "r"); //Abrindo a imagem "baboon.ascii.pgm"
    
    //Verificando se a abertura deu erro
    if (img == NULL) {
        perror("Erro na abertura do arquivo de imagem (1).");
        return 1;
    }



    //-------------------------------------- Leitura da imagem --------------------------------------

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

    //Fechando o arquivo
    fclose(img);

    return 0;
}-