#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Carros e combustível\n\n");

    int consumo[5];
    char nomes[5][20];
    int i = 0;

    for(i; i < 5; i++)
    {
        printf("Entre com Modelo do Carro: ");
        gets(nomes[i]);
        fflush(stdin);
        printf("Entre com o Consumo (em km por Litro): ");
        scanf("%i", &consumo[i]);
        fflush(stdin);
        printf("\n");
    }
    int menorConsumo = 1000;
    int posiMenor = 0;
    for (i = 0; i < 5; i++)
    {
        if(consumo[i] < menorConsumo)
        {
            menorConsumo = consumo[i];
            posiMenor = i;
        }
    }

    printf("\n");
    printf("O Carro com menor consumo é %s, fazendo %i Km/L!\n", nomes[posiMenor], menorConsumo);

    for(i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Carro: %s", nomes[i]);
        printf("\n");
        printf("Consumo em 1000 Km: %dL", (1000 /consumo[i]));
        printf("\n");
    }
    return 0;
}
