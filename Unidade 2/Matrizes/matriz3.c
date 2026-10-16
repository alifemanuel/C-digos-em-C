#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Usando matriz de duas dimens�es como argumento de fun��es */

#define LIN 10
#define COL 10

/* Preenche uma matriz com n�meros aleat�rios entre 0 e 100 */
void preenche_matriz(int mat[][COL]);
/* Exibe o conte�do de uma matriz na tela */
void imprime_matriz(int mat[][COL]);
/* Verifica qual � o maior valor */
int maior_valor(int mat[][COL]);

int main(void)
{
   int matriz[LIN][COL];
   int maior;

   // Comando adicionado 
   srand(time(NULL));

   preenche_matriz(matriz);
   imprime_matriz(matriz);
   maior = maior_valor(matriz);

   printf("\nMaior valor: %d\n", maior);

   return 0;
}

void preenche_matriz(int mat[][COL])
{
    int i, j;
    int min = -100;
    int max = 100;

    for(i = 0; i < LIN; i++){
       for(j = 0; j < COL; j++)
          mat[i][j] = min + rand()%(max - min + 1);
    }
}

void imprime_matriz(int mat[][COL])
{
   int i, j;
   for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++)
         printf("%d ", mat[i][j]);

      printf("\n");
   }
}

int maior_valor(int mat[][COL])
{
   int i, j;
   int maior;

   maior = mat[0][0];

   for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
         if(mat[i][j] > maior){
            maior = mat[i][j];
         }
      }
   }
   return(maior);
}
