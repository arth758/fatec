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

    printf("Opera��es Matem�ticas\n");
    printf("1-Adi��o\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n\nEscolha uma op��o: ");
    scanf("%i",&op);

    switch (op)
    {
    case 1:
        printf("O resultado da soma dos valores �: %.1f", result = adicao());
        break;
    case 2:
        printf("O resultado da subtra��o dos valores �: %.1f", result = subtracao());
        break;
    case 3:
        printf("O resultado da multiplica��o dos valores �: %.1f", result = multiplicacao());
        break;
    case 4:
        printf("O resultado da divis�o dos valores �: %.1f", result = divisao());
        break;
    default:
        printf("\nOp��o inv�lida!");
        break;
    }
}
