#include <stdio.h>
#include <stdlib.h>

int main()
{
    ex11();
    return 0;
}

void ex11()
{
    int n, aux = 0;

    printf("Informe um n�mero inteiro: ");
    scanf("%i", &n);

    if (n>0)
    {
        while (n>0)
        {
            aux = aux+n%10;
            n = n/10;
        }
        printf("\nA soma dos algarismos �: %i",aux);
    }
    else
    {
        printf("\nN�mero Inv�lido!");
    }

}
