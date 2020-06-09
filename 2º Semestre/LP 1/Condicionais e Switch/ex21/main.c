#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    ex21();
    return 0;
}

void ex21()
{
    int op;
    float n1,n2,result;

    printf("\n---MENU---");
    printf("\n\n---ESCOLHA UMA OP��O---");
    printf("\n1- Soma de 2 n�meros");
    printf("\n2- Diferen�a entre 2 n�meros (maior pelo menor)");
    printf("\n3- Produto entre 2 n�meros");
    printf("\n4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero)");
    printf("\n");
    scanf("%i",&op);

    switch (op)

    {
    case 1:
        printf("\nInforme o valor do 1� n�mero: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do 2� n�mero: ");
        scanf("%f",&n2);

        printf("\nO resultado �: %.1f", n1+n2);
        break;

    case 2:
        printf("\nInforme o valor do 1� n�mero: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do 2� n�mero: ");
        scanf("%f",&n2);

        if (n1 > n2)
            {
                printf("\nO n�mero %.1f � maior que %.1f", n1,n2);
            }
        else if (n2 > n1)
            {
                printf("\nO n�mero %.1f � maior que %.1f", n2,n1);
            }
        else
            {
                printf("\nO n�mero %.1f � igual a %.1f", n1,n2);
            }
        break;

    case 3:
        printf("\nInforme o valor do 1� n�mero: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do 2� n�mero: ");
        scanf("%f",&n2);

        printf("\nO produto �: %.1f", n1*n2);
        break;

    case 4:
        printf("\nInforme o valor do numerador: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do denominador: ");
        scanf("%f",&n2);

        if (n2 == 0)
        {
            printf("\nO denominador n�o pode ser 0");
        }
        else
        {
            printf("\nO resultado �: %.1f", n1/n2);
        }
        break;

    default:
        printf("\nOp��o inv�lida");
        break;
    }
}
