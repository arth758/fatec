#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Fac¸a um programa que seja uma agenda de compromissos e:
• Crie e leia um vetor de 5 estruturas de dados com: compromisso (maximo 60 letras) ´
e data. A data deve ser outra estrutura de dados contendo dia, mes e ano. ˆ
• Leia dois inteiros M e A e mostre todos os compromissos do mesˆ M do ano A.
Repita o procedimento ate ler ´ M = 0.*/

typedef struct data
{
    int dia, mes, ano;
} DATA;

typedef struct dado
{
    char compromisso[60];
    DATA dataCompromisso[5];
} AGENDA;

int controle;
AGENDA calendario[5];

void insere()
{
    for (controle = 0; controle < 5; controle++)
    {
        printf("\nCompromisso #%d: ", controle + 1);
        fflush(stdin);
        gets(calendario[controle].compromisso);
        printf("\tDia: ");
        fflush(stdin);
        scanf("%d", &calendario[controle].dataCompromisso[controle].dia);
        printf("\tMes: ");
        fflush(stdin);
        scanf("%d", &calendario[controle].dataCompromisso[controle].mes);
        printf("\tAno: ");
        fflush(stdin);
        scanf("%d", &calendario[controle].dataCompromisso[controle].ano);
    }
}

void procura()
{
    int mes, ano;
    while (mes != 0)
    {
        printf("Qual Mes deseja buscar ?\n\t");
        scanf("%d", &mes);
        if (mes == 0) break;
        fflush(stdin);
        printf("\nDe qual Ano ?\n\t");
        scanf("%d", &ano);
        fflush(stdin);
        printf("\nCompromissos:\n");
        for (controle = 0; controle < 5; controle++)
        {
            if (calendario[controle].dataCompromisso[controle].mes == mes && calendario[controle].dataCompromisso[controle].ano == ano)
            {
                printf("\tCompromisso: %s\n", calendario[controle].compromisso);
                printf("\t\tData: %d/%d/%d\n\n", calendario[controle].dataCompromisso[controle].dia, calendario[controle].dataCompromisso[controle].mes, calendario[controle].dataCompromisso[controle].ano);
            }
        }
    }
}

int main()
{
    printf("Exercicio 16\n\n");
    printf("Cadastro de Compormissos\n");
    insere();
    printf("Busca de Compromissos\n");
    procura();
    return 0;
}
