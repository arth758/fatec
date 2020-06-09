#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    ex18();
    return 0;
}

void ex18()
{
    float adicao(result)
    {
        float a,b;
        printf("Informe o valor de A: ");
        scanf("%f",&a);
        printf("Informe o valor de B: ");
        scanf("%f",&b);

        result = a+b;
        return (result);
    }

    float subtracao(result)
    {
        float a,b;
        printf("Informe o valor de A: ");
        scanf("%f",&a);
        printf("Informe o valor de B: ");
        scanf("%f",&b);

        result = a-b;
        return(result);
    }

    float multiplicacao(result)
    {
        float a,b;
        printf("Informe o valor de A: ");
        scanf("%f",&a);
        printf("Informe o valor de B: ");
        scanf("%f",&b);

        result = a*b;
        return(result);
    }

    float divisao(result)
    {
        float a,b;
        printf("Informe o valor de A: ");
        scanf("%f",&a);
        printf("Informe o valor de B: ");
        scanf("%f",&b);

        result = a/b;
        return(result);
    }

    int op;
    float result;

    printf("Operações Matemáticas\n");
    printf("1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n\nEscolha uma opção: ");
    scanf("%i",&op);

    switch (op)
    {
    case 1:
        printf("O resultado da soma dos valores é: %.1f", result = adicao());
        break;
    case 2:
        printf("O resultado da subtração dos valores é: %.1f", result = subtracao());
        break;
    case 3:
        printf("O resultado da multiplicação dos valores é: %.1f", result = multiplicacao());
        break;
    case 4:
        printf("O resultado da divisão dos valores é: %.1f", result = divisao());
        break;
    default:
        printf("\nOpção inválida!");
        break;
    }
}
