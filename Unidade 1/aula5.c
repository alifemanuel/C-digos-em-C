#include <stdio.h>
#include <unistd.h> /* Necess�rio para fun��o sleep()
                       Obs.: esse arquivo � usado porque o compilador �
                       o GCC!!! */

// Vari�vel global
int x_global = 0;

// Prot�tipo da fun��o
// Dois argumentos: um valor inteiro, um ponteiro
void modificar_variavel(int var1, int *var2);

// Fun��o principal
int main()
{
    // Vari�vel local de main
    int x_local_main = 0;
    // Vari�vel local para passar por refer�ncia na fun��o
    int y_local_main = 0;

    // Exibindo valores...
    printf("\nx_local_main = %d", x_local_main);
    printf("\nx_global = %d", x_global);
    printf("\ny_local_main = %d", y_local_main);

    // Modificando valor da vari�vel local e global...
    x_global = 100;
    x_local_main = 1;
    printf("\nValores de x_global e x_local_main foram alterados!");

    // Faz uma pausa de 2 segundos!
    sleep(2);

    // Exibindo valores...
    printf("\nx_local_main = %d", x_local_main);
    printf("\nx_global = %d", x_global);

    sleep(2);

    printf("\nChamando a funcao para modificar variaveis!");
    printf("\n\tx_local_main foi passado por valor!");
    printf("\n\ty_local_main foi passado por referencia!");
    // Chamando a fun��o...
    modificar_variavel(x_local_main, &y_local_main);

    sleep(2);

    printf("\nFuncao para modificar variaveis terminou!");


    sleep(2);

    // Exibindo valores...
    printf("\nx_local_main = %d", x_local_main);
    printf("\nx_global = %d", x_global);
    printf("\ny_local_main = %d", y_local_main);
    // printf("\nx_local_funcao = %d", x_local_funcao);

	return 0;
}

void modificar_variavel(int var1, int *var2)
{
    // Vari�vel local da fun��o
    int x_local_funcao = 20;

    printf("\nDENTRO DA FUNCAO!!!\n");
    // Exibindo valores...
    printf("\n\tx_local_funcao = %d", x_local_funcao);
    // printf("\n\tx_local_funcao = %d", x_local_main);
    printf("\n\tx_global = %d", x_global);

    sleep(2);

    // Modificando valores...
    // var1 recebeu x_local_main por valor!
    var1 = var1 + 10;
    //var2 recebeu y_local_main por referencia!
    *var2 = *var2 + 100;
    x_global = x_global + 1000;

    x_local_funcao = 50;

    printf("\n\tVariaveis modificadas dentro da funcao!");
    printf("\nSAINDO DA FUNCAO!!!");

    return;
}
