#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);
    printf("%d Elevado ao quadrado �: %f\n", x, pow(x, 2));
    printf("Raiz quadrada de %d �: %f\n", x, sqrt(x));
    return 1;
}
