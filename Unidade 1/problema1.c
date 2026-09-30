#include <stdio.h>
#include <math.h>

int main () {

    int n, j, fat;
    float x, sum, prod;

    printf("Digite o valor de x (e^x): \n");
    scanf("%f", &x);

    n = 2;
    sum = 1.0 + x;

    while (n <= 100) {

        j = n;
        prod = 1.0f;

        while (j >= 1) {
            prod = prod * x;
            j = j - 1;
        }
        j = n;
        fat = n;

        while (j > 1) {
            fat = fat * (j-1);
            j = j - 1;
        }

        sum = sum + (prod/(float)fat);
        n = n + 1;
    }

    printf("\n%f", sum);
    return 0;
}