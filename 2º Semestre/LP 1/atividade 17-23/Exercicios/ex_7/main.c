#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char *nomes[10][5];
    char *aux[5];
    int i,j,op;

    for(i = 0; i<5; i++)
    {
        printf("Digite o nome: \n");
        gets(nomes[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(strcmp(nomes[i], nomes[j]) < 0)
            {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }

    printf("\n-----LISTA DE NOMES-----\n");

    for(i = 0; i<op; i++)
    {
        printf("%s\n",strupr(nomes[i]));
    }
}
