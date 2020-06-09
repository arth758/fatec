#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int i;

    struct numcomplex
    {
        double a[2],b[2],c[2];
    };
    struct numcomplex comp;

    printf("O numero complexo deve ser da forma a1 + a2*i\n\n");

    for (i=1;i<3;i++)
        {
          printf("Insira o o coeficiente a%i \n", i);
          scanf("%lg",&comp.a[i-1]);
        }

    for (i=1;i<3;i++)
        {
          printf("Insira o o coeficiente b%i \n", i);
          scanf("%lg",&comp.b[i-1]);
        }

    //SOMA
    printf("\n-------SOMA-------\n");

    for (i=1;i<3;i++)
        {
            comp.c[i-1] = comp.a[i-1] + comp.b[i-1];
        }
    printf("\nA parte real do número complexo resultante é: %lg \n", comp.c[0]);
    printf("\nA parte imaginaria do número complexo resultante é: %lg \n", comp.c[1]);

    //SUBTRAÇÃO
    printf("\n-------SUBTRAÇÃO-------\n");
    for (i=1;i<3;i++)
        {
            comp.c[i-1] = comp.a[i-1] - comp.b[i-1];
        }
    printf("\nA parte real do número complexo resultante é: %lg \n", comp.c[0]);
    printf("\nA parte imaginaria do número complexo resultante é: %lg \n", comp.c[1]);

    //MULTIPLICAÇÃO
    printf("\n-------MULTIPLICAÇÃO-------\n");
    comp.c[0] = ((comp.a[0] * comp.b[0]) - (comp.a[1] * comp.b[1]));
    comp.c[1] = (comp.a[0] * comp.b[1] + comp.b[0] * comp.a[1]);
    printf("\nA parte real do número complexo resultante é: %lg \n", comp.c[0]);
    printf("\nA parte imaginaria do número complexo resultante é: %lg \n", comp.c[1]);
}
