#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exerc�cio 35\n");

    int dia, mes, ano, bissexto;
    printf("Entre com uma data, separada por barra: ");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    if(dia > 0 && dia < 31)
    {
        if(mes > 0 && mes < 13)
        {
            if((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0))
            {
                bissexto = 1;
            }
            else
            {
                bissexto = 0;
            }
            if(mes == 2)
            {
                if(bissexto == 1)
                {
                    if(dia > 0 && dia < 30)
                    {
                        printf("Data v�lida!\n");
                    }
                    else
                    {
                        printf("Data inv�lida!\n");
                    }
                }
                else
                {
                   if(dia > 0 && dia < 29)
                    {
                        printf("Data v�lida!\n");
                    }
                    else
                    {
                        printf("Data inv�lida!\n");
                    }
                }
            }
            else
            {
                if(dia > 0 && dia < 31)
                {
                    printf("Data v�lida!\n");
                }
                else
                {
                    printf("Data inv�lida!\n");
                }
            }
        }
        else
        {
            printf("Data inv�lida!\n");
        }
    }
    else
    {
        printf("Data inv�lida!\n");
    }
    return 0;
}
