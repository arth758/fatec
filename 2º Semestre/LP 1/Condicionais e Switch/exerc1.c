#include <stdio.h>

int main()
{
    int a, b;
    printf("Informe os numeros:\n");
    scanf("%i%i", &a, &b);
    if (a == b)
    {
        printf("os dois numeros sao iguais\n");
    }
    else if (a > b)
    {
        printf("\n%i eh o maior numero e %i eh o menor numero\n", a, b);
    }
    else

        printf("\n%i o menor numero e %i o maior numero\n", a, b);

    return 0;
}
