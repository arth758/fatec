#include <stdio.h>
#include <stdlib.h>

int main()
{
    //23:
    char s[25];
    int i, j;

    printf("Entre com as strings escolhidas: ");
    scanf("%s", s);

    printf("Entre com o primeiro numero inteiro positivo: ");
    scanf("%d",&i);

    printf("Entre com o segundo numero inteiro positivo: ");
    scanf("%d",&j);

    char result[25];
    int x;
    for(x = i; x <= j; x++)
    {
        printf("%c", s[x - 1]);
    }
    system("pause");
}
