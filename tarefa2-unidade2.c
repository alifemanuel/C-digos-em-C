// Declaração das bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Universidade Federal do Rio Grande do Norte (UFRN)
    Disciplina: DCA3101 - Algoritmos e Lógica de Programação
    Tarefa 2 - Unidade II: Ordenação de Vetores

    Aluno: Alif Emanuel Silva Sobrinho
    Matricula: 20260008330
*/

// Definindo o protótipo das funções
void bubblesort(int V[], int *comparacoes, int *trocas);
void quicksort(int vec[], int left, int right, int *comparacoes, int *trocas);
void preenche_vetor(int vec[]);
void imprime_vetor(int vec[]);

// Definindo a constante global N que corresponde ao tamanho dos nossos vetores
#define N 100

int main() {

    unsigned int i; //Variável local que nos auxiliará nos laços

    //Definição das variáveis contadoras a fim de exibir a eficiência de cada uma das funções
    int comparacoes_bubble = 0;
    int comparacoes_sort = 0;

    int trocas_bubble = 0;
    int trocas_sort = 0;

    //Declaração dos vetores de tamanho N
    int a[N]; 
    int b[N];

    //Inicialização da semente aleatória a fim de garantir aleatoriedade a cada execução do código
    srand(time(NULL));

    //Preenchendo o vetor A com valores aleatórios
    preenche_vetor(a);

    //Copiando cada elemento de A para o vetor B a fim de ter os mesmos valores nos dois vetores
    for(i = 0; i < N; i++) {
        b[i] = a[i];
    }

    //Exibindo os vetores não ordenados
    printf("Vetores sem ordenação: \n\n");

    printf("Vetor A: ");
    imprime_vetor(a);

    printf("Vetor B: ");
    imprime_vetor(b);

    printf("\n");

    //Chamando as funções de ordenação
    bubblesort(a, &comparacoes_bubble, &trocas_bubble);
    quicksort(b, 0, N-1, &comparacoes_sort, &trocas_sort);

    //Exibição dos vetores ordenados
    printf("Vetores ordenados: \n\n");

    printf("Vetor A: ");
    imprime_vetor(a);
    printf("-> bubblesort\n\n");

    printf("Vetor B: ");
    imprime_vetor(b);
    printf("-> quicksort\n\n");

    //Exibição do desempenho de cada função
    printf("\nDesempenho das funções:\n\n");

    printf("Bubble Sort:\n");
    printf("Comparações: %d\n", comparacoes_bubble);
    printf("Trocas: %d\n\n", trocas_bubble);

    printf("Quick Sort:\n");
    printf("Comparações: %d\n", comparacoes_sort);
    printf("Trocas: %d\n\n", trocas_sort);

    return 0;
}
//Função para preencher o vetor com valores aleatórios
void preenche_vetor(int vec[]) {
    int i;
    int min = 1;
    int max = 100;

    for(i = 0; i < N; i++){
          vec[i] = min + rand()%(max - min + 1);
    }
}

//Função para imprimir o vetor formatado em colchetes
void imprime_vetor(int vec[]) {

    int i;

    printf("[");

    for(i = 0; i < N; i++) {

        if(i == N - 1) {
            printf("%d", vec[i]);
        } else {
            printf("%d, ", vec[i]);
        }
    }

    printf("]\n");
}

//Função bubblesort, eficiente para poucos elementos mas ineficiente para muitos elementos
void bubblesort(int vec[], int *comparacoes, int *trocas) {
    int a, b, t;

    for (a = 1; a < N; a++){
        for(b=N-1; b>=a; b--){

            (*comparacoes)++; //Contando uma comparação
            
            if(vec[b-1] > vec[b]) {
                t = vec[b-1];
                vec[b-1] = vec[b];
                vec[b] = t;

                (*trocas)++; //Contando uma troca
            }
        }
    }
}

//Função quicksort, um processo de ordenação de vetores mais otimizado e eficiente que o bubblesort
void quicksort(int vec[], int left, int right, int *comparacoes, int *trocas) {
    int i, j, x, y;

    i = left;
    j = right;

    x = vec[(left + right)/2];

    do {

        //Percorre o vetor da esquerda para a direita
        while(i <= right) {

            (*comparacoes)++;

            if(vec[i] < x) {
                i = i + 1;
            } else {
                break;
            }
        }

        //Percorre o vetor da direita para a esquerda
        while(j >= left) {

            (*comparacoes)++;

            if(x < vec[j]) {
                j = j - 1;
            } else {
                break;
            }
        }

        if(i <= j) {
            
            if(i < j){
                y = vec[i];
                vec[i] = vec[j];
                vec[j] = y;

                (*trocas)++; //Contando uma troca
            }

            i = i + 1;
            j = j - 1;
        }

    } while (i <= j);

    if(left < j) {
        quicksort(vec, left, j, comparacoes, trocas);
    }
    if(i < right) {
        quicksort(vec, i, right, comparacoes, trocas);
    }
    

}
