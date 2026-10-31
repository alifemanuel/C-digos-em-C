#include <stdio.h>

void contador_chamadas(void);

int main()
{

}

void contador_chamadas(void)
{
    static int n = 0;
    n++;
    printf("Chamada no. %d\n", n);
}
