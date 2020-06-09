#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Equacao de 2 Grau\n");

    float a, b, c, x1, x2, delta;

    printf("Entre com o valor para A: ");/*2*/
    scanf("%f", &a);
    printf("Entre com o valor para B: ");/*3*/
    scanf("%f", &b);
    printf("Entre com o valor para C: ");/*3*/
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if(delta < 0){
        printf("Delta menor que 0!");
        exit(0);
    }

    delta = sqrt(delta);

    x1 = ((-b) + (delta)) / (2 * a);
    x2 = ((-b) - (delta)) / (2 * a);

    printf("\nValor de X1 e X2: %f e %f", x1, x2);
    return 0;
}
