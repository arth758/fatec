#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Area e Perimetro do Triangulo\n\n");

    int L1, L2, L3, semiPerimetro, area, perimetro;

    printf("Entre com os lados do triangulo:\n");
    scanf("%i", &L1); /*10*/
    scanf("%i", &L2); /*10*/
    scanf("%i", &L3); /*12*/

    perimetro = L1 + L2 + L3;
    semiPerimetro = perimetro / 2;
    area = semiPerimetro * (semiPerimetro - L1) * (semiPerimetro - L2) * (semiPerimetro - L3);
    area = sqrt(area);

    printf("\n\nArea: %i", area); /*48*/
    printf("\nPerimetro: %d", perimetro);/*32*/

    return 0;
}
