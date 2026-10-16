/* M�dia de um n�mero arbitr�rio de notas */

#include <stdio.h>

#define LIM 40

int main(void)
{
	float notas[LIM];
	float soma = 0.0; /* Declarando a vari�vel e a iniciando com 0.0 */
	int i = 0;

	do {
		if(i >= LIM){
			printf("Buffer lotado! \n");
			i++;
			break; /* Sai do laco do-while! */
		}
		printf("Digite a nota do aluno %d: ", i);
		scanf("%f", &notas[i]);
		if(notas[i] > 0)
			soma += notas[i];
	} while(notas[i++] > 0);

	printf("Media das notas: %.2f\n", soma/(i-1));
	return 0;
}
