#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Número Par");
    }
    else
    {
        printf("Número ímpar");
    }
}
