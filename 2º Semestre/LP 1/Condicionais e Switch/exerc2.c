#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <locale.h>

int main()

{

    setlocale(LC_ALL, "Portuguese");

    float num, raiz;

    printf("informe um n�mero: ");

    scanf("%f", &num);

    if (num >= 0)

    {

        raiz = sqrt(num);

        printf("Raiz: %f", raiz);
    }

    else

    {

        printf("numero inv�lido!");
    }
}
