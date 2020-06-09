#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Area e Perimetro do retangulo\n");
    int base, altura, perimetro, area;

    printf("Entre com a base e a altura, respectivamente, no formato (BASE ALTURA):\n");
    scanf("%i %i", &base, &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);

    printf("Area: %i\nPerimetro: %i", area, perimetro);
}
