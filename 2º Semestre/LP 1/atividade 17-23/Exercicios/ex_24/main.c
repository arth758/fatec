#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[25], c[1];
    int i;

    printf("Entre com as strings escolhidas: ");
    scanf("%s",&s);
    fflush(stdin);
    printf("Entre com a letra ser procurada: ");
    scanf("%c",&c);

    printf("Entre com o indice inicial: ");
    scanf("%d",&i);

    int x;
    for(x = 0; x <= 25; x++)
    {
        if (s[x] == c)
        {
           printf("%d", i);
        }
    }
    system("pause");
}
