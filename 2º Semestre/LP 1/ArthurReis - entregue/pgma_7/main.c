#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Claculo de IMC!\n");

    float peso, altura, imc;

    printf("Entre com seu peso(Quilos):\n");
    scanf("%f", &peso); /*70*/
    printf("Entre com sua altura(Metros):\n");
    scanf("%f", &altura);/*1.7*/

    imc = peso / (altura * altura);

    printf("IMC: %f", imc);/*24,2*/
    return 0;
}
