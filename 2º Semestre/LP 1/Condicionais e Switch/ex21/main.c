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
    printf("\n\n---ESCOLHA UMA OPÇÃO---");
    printf("\n1- Soma de 2 números");
    printf("\n2- Diferença entre 2 números (maior pelo menor)");
    printf("\n3- Produto entre 2 números");
    printf("\n4- Divisão entre 2 números (o denominador não pode ser zero)");
    printf("\n");
    scanf("%i",&op);

    switch (op)

    {
    case 1:
        printf("\nInforme o valor do 1º número: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do 2º número: ");
        scanf("%f",&n2);

        printf("\nO resultado é: %.1f", n1+n2);
        break;

    case 2:
        printf("\nInforme o valor do 1º número: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do 2º número: ");
        scanf("%f",&n2);

        if (n1 > n2)
            {
                printf("\nO número %.1f é maior que %.1f", n1,n2);
            }
        else if (n2 > n1)
            {
                printf("\nO número %.1f é maior que %.1f", n2,n1);
            }
        else
            {
                printf("\nO número %.1f é igual a %.1f", n1,n2);
            }
        break;

    case 3:
        printf("\nInforme o valor do 1º número: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do 2º número: ");
        scanf("%f",&n2);

        printf("\nO produto é: %.1f", n1*n2);
        break;

    case 4:
        printf("\nInforme o valor do numerador: ");
        scanf("%f",&n1);
        printf("\nInforme o valor do denominador: ");
        scanf("%f",&n2);

        if (n2 == 0)
        {
            printf("\nO denominador não pode ser 0");
        }
        else
        {
            printf("\nO resultado é: %.1f", n1/n2);
        }
        break;

    default:
        printf("\nOpção inválida");
        break;
    }
}
