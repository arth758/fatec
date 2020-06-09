#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 38\n");

    int dia, mes, ano, bissexto;
    const anoAtual = 2019;
    printf("Entre com uma data de nascimento, separada por barra: ");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    if(dia > 0 && dia < 31)
    {
        if(mes > 0 && mes < 13)
        {
            if(ano <= 2019)
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
                            printf("Data válida!\n");
                        }
                        else
                        {
                            printf("Data inválida!\n");
                        }
                    }
                    else
                    {
                       if(dia > 0 && dia < 29)
                        {
                            printf("Data válida!\n");
                        }
                        else
                        {
                            printf("Data inválida!\n");
                        }
                    }
                }
                else
                {
                    if(dia > 0 && dia < 31)
                    {
                        printf("Data válida!\n");
                    }
                    else
                    {
                        printf("Data inválida!\n");
                    }
                }
            }
            else
            {
                printf("Data inválida!\n");
            }
        }
        else
        {
            printf("Data inválida!\n");
        }
    }
    else
    {
        printf("Data inválida!\n");
    }

    return 0;
}
