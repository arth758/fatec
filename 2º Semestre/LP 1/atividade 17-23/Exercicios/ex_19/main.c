#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Leitor de Nomes\n\n");

    int idades[10];
    char nomes[10][20];
    int i = 0;

    for(i; i < 10; i++)
    {
        printf("Entre com um Nome: ");
        gets(nomes[i]);
        fflush(stdin);
        printf("Entre com a idade: ");
        scanf("%i", &idades[i]);
        fflush(stdin);
        if(idades[i] < 0)
        {
            break;
        }
        printf("\n");
    }
    int menorIdd = 1000, maiorIdd = 0;
    int posiMenor = 0, posiMaior = 0;
    for (i = 0; i < 10; i++)
    {
        if(idades[i] > maiorIdd)
        {
            maiorIdd = idades[i];
            posiMaior = i;
        }
        if(idades[i] < menorIdd)
        {
            menorIdd = idades[i];
            posiMenor = i;
        }
    }

    printf("\n");
    printf("O Nome do mais velho é %s, com %i anos de idade!\n", nomes[posiMaior], maiorIdd);
    printf("O Nome do mais novo é %s, com %i anos de idade!\n", nomes[posiMenor], menorIdd);

    return 0;
}
