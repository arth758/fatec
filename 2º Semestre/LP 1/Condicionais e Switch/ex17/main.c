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
    printf("�rea de um Trap�zio\n");

    printf("Informe a base maior: \n");
    scanf("%f",&basemaior);
    printf("Informe a base menor: \n");
    scanf("%f",&basemenor);
    printf("Informe a altura: \n");
    scanf("%f",&altura);

    if (basemaior <= 0 || basemenor <= 0)
    {
        printf("\nAs bases n�o podem ser 0 ou menores");
        exit(0);
    }

    area = ((basemaior+basemenor)*altura)/2;

    printf("A �rea do trap�zio �: %.1f", area);
}
