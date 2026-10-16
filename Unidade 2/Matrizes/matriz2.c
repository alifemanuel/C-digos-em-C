#include <stdio.h>

/* Imprime o elemento de maior valor de uma matriz de 5 elementos */
/* O vetor não pode ter elemento igual a 0 */

#define VALMAX 5

int max(int list2[], int tamanho2);

int main(void)
{
    int list[VALMAX];
    int tamanho = 0;
    int num;

    for(tamanho = 0; tamanho < VALMAX; tamanho++){
       printf("Digite numero: ");
       scanf("%d", &list[tamanho]);
    }

    num = max(list, VALMAX);

    printf("O maior valor do vetor e': %d", num);

    return 0;
}

/* Definição da função */
int max(int list2[], int tamanho2)
{
   int i;
   int maior_valor;

   maior_valor = list2[0];

   for(i = 1; i < tamanho2; i++){
      if(maior_valor < list2[i])
         maior_valor = list2[i];
   }

   return(maior_valor);
}
