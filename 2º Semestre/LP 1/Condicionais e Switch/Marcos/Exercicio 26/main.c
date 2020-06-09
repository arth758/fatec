#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int distancia, gasolina, consumo;
    printf("Entre com a distancia em Km: ");
    scanf("%d",&distancia);

    printf("Entre com a quantidade de combustivel gasta: ");
    scanf("%d",&gasolina);

    consumo = distancia / gasolina;

    if (consumo < 8)
    {
        printf("Venda o carro!!");
    }
    else if(consumo >= 8 && consumo <= 14)
    {
        printf("Econômico!!");
    }
    else
    {
        printf("Super econômico!!!!!!!!!!");
    }
}
