#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a;
    printf("Informe um n�mero real: ");
    scanf("%f", &a);
    if (a > 0)
        printf("Raiz quadrada de %f = %f\n", a, sqrtf(a));
    else
        printf("%f * 2 = %f\n", a, a * a);
    return 0;
}
