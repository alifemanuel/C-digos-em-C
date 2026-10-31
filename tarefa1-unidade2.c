
#include <stdio.h>

#define N 10

/*
    Universidade Federal do Rio Grande do Norte (UFRN)
    Disciplina: DCA3101 - Algoritmos e Lógica de Programação
    Tarefa 1 - Unidade II: Vetores e Funções

    Aluno: Alif Emanuel Silva Sobrinho
    Matricula: 20260008330
*/

//Função para calcular o somatório de x_k
double soma_X_k(const double x[], int n) {
    double soma = 0.0;
    int k;

    for (k = 0; k < n; k++) {
        soma += x[k];
    }

    return soma;
}

//Função para calcular o somatório de x_k, porém com cada elemento ao quadrado
double soma_X_k_quadrado(const double x[], int n) {
    double soma = 0.0;

    for (int k = 0; k < n; k++) {
        soma += x[k] * x[k];
    }

    return soma;
}

//Função para calcular o somatório do produto de x_k e y_k
double soma_XY(const double x[], const double y[], int n) {
    double soma = 0.0;

    for (int k = 0; k < n; k++) {
        soma += x[k] * y[k];
    }

    return soma;
}

//Função para calcular o somatório de y_k
double soma_Y_k(const double y[], int n) {
    double soma = 0.0;

    for (int k = 0; k < n; k++) {
        soma += y[k];
    }

    return soma;
}

int main() {

    //Coordenadas x_k fornecidas no enunciado.
    double x[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    //Coordenadas y_k fornecidas no enunciado.
    double y[10] = {1.3, 3.5, 4.2, 5.0, 7.0, 8.8, 10.1, 12.5, 13.0, 15.6};

    //Variáveis para armazenar os somatórios.
    double somaX, somaY, somaX2, somaXY;

    //Variáveis para os parâmetros da reta.
    double denominador, a0, a1;

    //Variáveis para os valores estimados e os erros.
    double yCalculado, residuo;
    double erroQuadratico = 0.0;

    //Calcula os somatórios do ajuste linear.
    somaX = soma_X_k(x, N);
    somaY = soma_Y_k(y, N);
    somaX2 = soma_X_k_quadrado(x, N);
    somaXY = soma_XY(x, y, N);

    //De acordo com a fórmula, o denominador é calculado desta forma.
    denominador = N * somaX2 - somaX * somaX;

    //Verificação para caso o denominador seja igual a zero, ou seja, evita indeterminação
    if (denominador == 0.0) {
        printf("Não foi possível calcular os parâmetros.\n");
    }

    //Cálculo do coeficiente a0
    a0 = (somaX2 * somaY - somaXY * somaX) / denominador;

    //Cálculo do coeficiente a1
    a1 = (N * somaXY - somaX * somaY) / denominador;

    //Exibindo os somatórios
    printf("\n");
    printf("Soma de x_k:       %.4f\n", somaX);
    printf("Soma de y_k:       %.4f\n", somaY);
    printf("Soma de x_k^2:     %.4f\n", somaX2);
    printf("Soma de x_k*y_k:   %.4f\n", somaXY);

    //Exibindo os parâmetros da reta
    printf("\n\n");
    printf("a0 = %.6f\n", a0);
    printf("a1 = %.6f\n", a1);
    printf("f(x) = %.6f*x + (%.6f)\n", a1, a0);

    //Cálculo do resíduo
    printf("\n\n");
    printf("%5s %10s %10s %12s %12s\n",
           "k", "x_k", "y_k", "f(x_k)", "Residuo");

    for (int k = 0; k < N; k++) {

        //Calcula o erro estimado pela reta
        yCalculado = a1 * x[k] + a0;

        //Calcula a diferença entre o valor real e o estimado
        residuo = y[k] - yCalculado;

        //Calcula o acúmulo do quadrado do resíduo
        erroQuadratico += residuo * residuo;

        //Exibindo os resultados
        printf("%5d %10.2f %10.2f %12.6f %12.6f\n",
               k, x[k], y[k], yCalculado, residuo);
    }

    //Exibindo o erro quadrático do ajuste
    printf("\n\n");
    printf("Erro quadrático = %.6f\n", erroQuadratico);

    return 0;
}
