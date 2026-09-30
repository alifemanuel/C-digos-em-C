#include <stdio.h>

void contador_chamadas(void);

int main() {

    int n = 1;

    while (n <= 100) {
        contador_chamadas();
    }

    return 0;
}

void contador_chamadas(void) {
    static int n = 0;
    n++;

    if (n % 120 == 0) {
        printf("Chamada no. %d\n", n);
    }
}