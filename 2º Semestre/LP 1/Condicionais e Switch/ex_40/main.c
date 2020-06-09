#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 40\n");

    float valFabrica, valFinal, pctDistribuidor, pctImpostos;

    printf("Entre com o valor de fabrica do carro: ");
    scanf("%f", &valFabrica);

    if(valFabrica <= 12000)
    {
        pctDistribuidor = 0.05;
        pctImpostos = 0;
    }
    else if(valFabrica > 12000 && valFabrica <= 25000)
    {
        pctDistribuidor = 0.1;
        pctImpostos = 0.15;
    }
    else
    {
        pctDistribuidor = 0.15;
        pctImpostos = 0.2;
    }

    valFinal = (valFabrica + ((valFabrica * pctDistribuidor) + (valFabrica * pctImpostos)));
    printf("\nValor final do carro: R$%.2f\n", valFinal);
    return 0;
}
