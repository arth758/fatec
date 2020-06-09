#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Equacao de 1 Grau\n");

    float a, b, x, y = 0;

    printf("Entre com o valor para A: ");/*2*/
    scanf("%f", &a);
    printf("Entre com o valor para B: ");/*3*/
    scanf("%f", &b);

    x = (- b) / a;
    printf("\nValor de X: %f", x);
    return 0;
}
