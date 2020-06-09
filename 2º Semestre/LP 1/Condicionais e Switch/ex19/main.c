#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    ex19();
    return 0;
}

void ex19()
{
    int num,var3,var5;
    printf("\nInforme um número inteiro: ");
    scanf("%i",&num);

    var3 = num%3;
    var5 = num%5;

    if (var3 == 0)
    {
        printf("\nNúmero divisível por 3");
    }
    else if (var5 == 0)
    {
            printf("\nNúmero divisível por 5");
    }
}
