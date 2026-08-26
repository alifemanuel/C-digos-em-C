# C-digos-em-C
Códigos feitos em sala de aula no curso de bacharelado em Engenharia Elétrica na UFRN.

# Aula 2 - Declaração de variáveis e comandos de entrada e saída

Uma variável é um local na memória do computador em que um valor pode ser armazenado para 
ser usado pelo programa. A declaração das variáveis indica que o computador terá reservado três 
locais para armazenar dados inteiros (tipo int).

Toda variável deve ser primeiramente declarada no programa antes de ser usada, em programas 
escritos em C. O padrão é fazer isso no início do código, após a função main() ou após o início de 
qualquer outra função do programa.

Exemplo: 

#include <stdio.h>

int main() {
    ...
    return 0;   
}

## Comandos de entrada e saída

- printf(): comando de saída
- scanf(): comando de entrada de dados

- "%d": string de controle de formato (indica o tipo de dado que deve ser digitado pelo usuário)
- &inteiro1 usa o operador endereço (&) e o nome da variável (significa que a função copiará o valor digitado no local da memória reservado para inteiro1)

O operador (&) é obrigatório na função scanf(), em C!

Exemplo:

<pre>
soma = inteiro1 + inteiro2;

prinf("A soma é: %d\n", soma)
</pre>

