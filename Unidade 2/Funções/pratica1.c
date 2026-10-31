#include <stdio.h>
#include <unistd.h> /* Necessário para função sleep()
                       Obs.: esse arquivo é usado porque o compilador é
                       o GCC!!! */

// Variável global
int x_global = 0;

// Protótipo da função
// Dois argumentos: um valor inteiro, um ponteiro
void modificar_variavel(int var1, int *var2);

// Função principal
int main()
{
    // Variável local de main
    int x_local_main = 0;
    // Variável local para passar por referência na função
    int y_local_main = 0;

    // Exibindo valores...
    printf("\nx_local_main = %d", x_local_main);
    printf("\nx_global = %d", x_global);
    printf("\ny_local_main = %d", y_local_main);

    // Modificando valor da variável local e global...
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
    // Chamando a função...
    modificar_variavel(x_local_main, &y_local_main);

    sleep(2);

    printf("\nFuncao para modificar variaveis terminou!");


    sleep(2);

    // Exibindo valores...
    printf("\nx_local_main = %d", x_local_main);
    printf("\nx_global = %d", x_global);
    printf("\ny_local_main = %d", y_local_main);
    printf("\nx_local_funcao = %d", x_local_funcao);

	return 0;
}

void modificar_variavel(int var1, int *var2)
{
    // Variável local da função
    int x_local_funcao = 20;

    printf("\nDENTRO DA FUNCAO!!!\n");
    // Exibindo valores...
    printf("\n\tx_local_funcao = %d", x_local_funcao);
    printf("\n\tx_local_funcao = %d", x_local_main);
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
