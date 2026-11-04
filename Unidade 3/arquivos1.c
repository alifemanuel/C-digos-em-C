#include <stdio.h>

int main(void) {

    FILE *arq;
    //FILE *arq = fopen("teste.txt", "w"); - Pode-se declarar o ponteiro e imediatamente usar a função, opcional.
    arq = fopen("teste2.txt", "r");

    //Testando se o arquivo foi aberto
    if(arq == NULL) {
        printf("\nArquivo não aberto.");
        return 1;
    }

    printf("\nArquivo aberto!\n");

    //ESCRITA
    // fputs("Arquivo teste - sequência de inteiros\n", arq);
    
    // for (int i = 0; i < 20; i++) {
    //     fprintf(arq, "%d ", i);
    // }

    //LEITURA
    int n;
    float v[10];

    fscanf(arq, "%d", &n);

    for(int i = 0; i < n; i++)
        fscanf(arq, "%f", &v[i]);
    
    printf("\n");

    for(int i = 0; i < n; i++)
        printf("%.2f ", v[i]);


    fclose(arq);
    return 0;
}