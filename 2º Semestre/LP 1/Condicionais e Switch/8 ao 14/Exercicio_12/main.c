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

    printf("Insira um n�mero: ");
    scanf("%i",&num);

    if (num < 0)
    {
        printf("\nO n�mero n�o pode ser negativo!");
    }
    else
    {
        logaritmo = log(num);
        printf("\nLogaritmo do n�mero: %f",logaritmo);
    }
}
