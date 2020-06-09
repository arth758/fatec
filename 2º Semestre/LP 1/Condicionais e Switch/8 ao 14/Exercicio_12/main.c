#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //colocar biblioteca math.h
    ex12();
    return 0;
}

void ex12()
{
    int num;
    float logaritmo = 0;

    printf("Insira um número: ");
    scanf("%i",&num);

    if (num < 0)
    {
        printf("\nO número não pode ser negativo!");
    }
    else
    {
        logaritmo = log(num);
        printf("\nLogaritmo do número: %f",logaritmo);
    }
}
