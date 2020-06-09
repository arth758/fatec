#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    ex17();
    return 0;
}

void ex17()
{
    float basemaior, basemenor, altura, area;
    printf("Área de um Trapézio\n");

    printf("Informe a base maior: \n");
    scanf("%f",&basemaior);
    printf("Informe a base menor: \n");
    scanf("%f",&basemenor);
    printf("Informe a altura: \n");
    scanf("%f",&altura);

    if (basemaior <= 0 || basemenor <= 0)
    {
        printf("\nAs bases não podem ser 0 ou menores");
        exit(0);
    }

    area = ((basemaior+basemenor)*altura)/2;

    printf("A área do trapézio é: %.1f", area);
}
