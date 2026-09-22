#include <stdio.h>
#include <math.h> // - Cabeçalho com funções matemáticas básicas

int main() {
    // Declarando as variáveis
    double x_i, y_i, theta_i, x_f, y_f, theta_f;
    double passo = 0.025;
    double k = 0.0;

    double x_k = 0.0, y_k = 0.0; //Declarando as coordenadas intermediárias

    printf("Informe os valores de x_i, y_i e theta_i, nesta ordem (expressar o ângulo em graus): \n");
    scanf("%lf %lf %lf", &x_i, &y_i, &theta_i);

    printf("Informe os valores de x_f, y_f e theta_f, nesta ordem (expressar o ângulo em graus): \n");
    scanf("%lf %lf %lf", &x_f, &y_f, &theta_f);

    while ((x_i < 0.0) 
    || (x_i > 5.0) 
    || (x_f < 0.0) 
    || (x_f > 5.0)
    || (y_i < 0.0) 
    || (y_i > 5.0) 
    || (y_f < 0.0) 
    || (y_f > 5.0)
    || ((fmod(theta_i, 90.0) == 0.0) && theta_i != 0) // Função para calcular o resto da divisão do ângulo por 90°
    || (fmod(theta_f, 90.0) == 0.0) && theta_f != 0) {
        printf("\nPor favor, não utilize valores menores que 0m ou maiores que 5m para a posição.\n");
        printf("Além disso, é proibido ângulos múltiplos de 90°. \n \n");
        
        printf("Informe os valores de x_i, y_i e theta_i, nesta ordem (expressar o ângulo em graus): \n");
        scanf("%lf %lf %lf", &x_i, &y_i, &theta_i);

        printf("Informe os valores de x_f, y_f e theta_f, nesta ordem (expressar o ângulo em graus): \n");
        scanf("%lf %lf %lf", &x_f, &y_f, &theta_f);
    }

    //Convertendo o ângulo de graus para radianos
    double pi = 3.14; // Isso é um crime, tem razão
    double theta_i_rad = theta_i*pi/180;
    double theta_f_rad = theta_f*pi/180;

    while (k <= 1) {
        double a0, a1, a2, a3, b0, b1, b2, b3;
        a0 = x_i;
        a1 = 1;
        a2 = 2;
        a3 = x_f - x_i - a2 - a1;

        b0 = y_i;
        b1 = a1*tan(theta_i_rad);

        b2 = 3*(y_f - y_i) - 3*(tan(theta_f_rad))*(x_f - x_i) + a2*tan(theta_f_rad) - 2*a1*(tan(theta_i_rad) - tan(theta_f_rad));
        b3 = 3*(x_f - x_i)*tan(theta_f_rad) - 2*(y_f - y_i) - a2*tan(theta_f_rad) - a2*(2*tan(theta_f_rad) - tan(theta_i_rad));

        x_k = a0 + a1*k + a2*k*k + a3*k*k*k;
        y_k = b0 + b1*k + b2*k*k + b3*k*k*k;

        printf("k = %.3f; x_k = %.3f; y_k = %.3f \n", k, x_k, y_k);

        k = k + passo;
    }

}