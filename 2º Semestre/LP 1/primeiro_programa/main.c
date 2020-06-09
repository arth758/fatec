#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado, A, P;
    printf("Digite o valor do lado do quadrado\n");
    scanf("%i", &lado);
    if (lado > 5)
    {
        A = lado * lado;
        P = lado * 4;
        printf("Area e perimetro do quadrado equivalem a %i, %i \n", A, P);
    }
    system("pause");
    return 0;
}
