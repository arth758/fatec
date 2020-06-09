#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int ano;
    setlocale(LC_ALL,("Portuguese"));
    printf("Exercicio 23!");
    printf("Entre com um ano.\n");
    scanf("%d",&ano);

    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
    {
        printf("É ano bissexto!");
    }
    else{
        printf("Não é ano bissexto!");
    }

}
