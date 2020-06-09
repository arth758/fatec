#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf("Informe os dois n�meros: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d � maior que %d\n", a, b);
    else if (a < b)
        printf("%d � maior que %d\n", b, a);
    else
        printf("S�o iguais\n");
    printf("Diferen�a: %d - %d = %d\n", a, b, a - b);
    return 0;
}
