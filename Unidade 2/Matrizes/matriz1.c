/* Atribuição, preenchimento e exibição de uma matriz */
#include <stdio.h>

#define LIN 5
#define COL 5

int main()
{
   int matriz[LIN][COL];
   int i, j;

   /* Preenchendo uma matriz */
   for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
         /* Atribuição de valores para os elementos da matriz */
         matriz[i][j] = i + j;
      }
   }

   /* Exibindo os elementos de uma matriz */
   for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }

   return 0;
}
