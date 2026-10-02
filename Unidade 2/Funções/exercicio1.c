#include <stdio.h>

void calcular_media(char tipo, int n1, int n2, int n3) {
    double media = 0.0;

    if (tipo == 'A' || tipo == 'B') {
        media = (n1+n2+n3)/3.0;
    }
    if (tipo == 'P' || tipo == 'p') {
        media = (n1*5 + n2*3 + n3*2)/10.0;
    }

    printf("A média é: %f", media);

}

int main() {

    int n1 = 0, n2 = 0, n3 = 0;
    char tipo;

    printf("Digite as três notas de forma sequencial e espaçada: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    while ((n1 < 0) || (n2 < 0) || (n3 < 0)) {
        printf("Por favor, digite valores inteiros e positivos para as notas: \n");
        scanf("%d %d %d", &n1, &n2, &n3);
    }

    printf("Digite A para média arimética ou P para média ponderada: \n");
    scanf(" %c", &tipo);

    while ((tipo != 'A') && (tipo != 'a') && (tipo != 'P') && (tipo != 'p')) {
        printf("Digite A para média arimética ou P para média ponderada: \n");
        scanf(" %c", &tipo);
    }

    calcular_media(tipo, n1, n2, n3);
    return 0;
}
