#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    ex15();
    return 0;
}

void ex15()
{
    int op;

    printf("Dias da Semana!");
    printf("\nDigite um n�mero de 1 a 7:\n");
    scanf("%i",&op);

    switch (op)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Ter�a-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("S�bado");
        break;
    default:
        printf("N�mero Inv�lido");
        break;
    }
}
