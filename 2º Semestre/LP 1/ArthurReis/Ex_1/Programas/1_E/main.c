#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculo de Porcentagem!\n\n");

    float km_antes, km_depois;
    float porcentagem;
    char pctgm = "%";

    printf("Entre com a kilometragem ANTES do alogritmo: ");
    scanf("%f", &km_antes);
    printf("Entre com a kilometragem DEPOIS do alogritmo: ");
    scanf("%f", &km_depois);

    porcentagem = ((km_antes - km_depois) / km_antes) * 100;
    printf(("\nPorcentagem de Reducao: %.2f%%"), porcentagem);

    return 0;
}
