#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float h;
    float peso;

    printf("Informe seu sexo: ");
    scanf("%c",&sexo);
    printf("Iforme a sua altura: ");
    scanf("%f",&h);
    if(sexo == "M" || "m")
    {
        peso = (72.7 * h) - 58;
    }
    else

    {
        peso = (62.1 * h) - 44.7;
    }
    printf("O seu peso ideal é %0.1f", peso);
}


