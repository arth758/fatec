#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faca um programa que controle o fluxo de voos nos aeroportos de um paıs. Com V = 5
(voos) e A = 5 (aeroportos) e:
• Crie e leia um vetor de voos, sendo que cada voo contem um codigo de aeroporto
de origem e um de destino.
• Crie um vetor de aeroportos, sendo que cada aeroporto contem seu codigo, quanti-
dade de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto e identificado por um codigo inteiro entre 0 e (A-1). Nao aceite
aeroportos de codigo inexistente.*/

typedef struct voo
{
    int codAeroOrigem, codAeroDestino;
} VOOS;

typedef struct portos
{
    int codigo, qtdVoosSaem, qtdVoosChegam;
} AEROPORTOS;

VOOS controleVoos[5];
AEROPORTOS controleAeroportos[5];
int const tamanho = 5;
int controle;

void cadAeroportos()
{
    printf("\nCadastro de AeroPortos\n");
    for (controle = 0; controle < tamanho; controle++)
    {
        int cod;
        printf("\n\tCodigo: ");
        fflush(stdin);
        scanf("%d", &cod);
        if (cod > 5 || cod < 0)
        {
            printf("\n\t\tCodigo inexistente!\n");
            controle--;
        }
        else
        {
            controleAeroportos[controle].codigo = cod;

            printf("\tQuantidade de Voos que Chegam: ");
            fflush(stdin);
            scanf("%d", &controleAeroportos[controle].qtdVoosChegam);

            printf("\tQuantidade de Voos que Saem: ");
            fflush(stdin);
            scanf("%d", &controleAeroportos[controle].qtdVoosSaem);
        }
    }
}

void cadVoos()
{
    printf("\n\nCadastro de Voos\n");
    for (controle = 0; controle < tamanho; controle++)
    {
        printf("\n\tCodigo do AeroPorto de Origem: ");
        fflush(stdin);
        scanf("%d", &controleVoos[controle].codAeroOrigem);

        printf("\tCodigo do AeroPorto de Destino: ");
        fflush(stdin);
        scanf("%d", &controleVoos[controle].codAeroDestino);
    }
}

void buscaVoos()
{
    printf("\n\nBusca de Voos\n");
    char op;
    do
    {
        printf("\nPelo que deseja Buscar ?\n");
        printf("\t0 - Sair\n");
        printf("\t1 - Aeroporto Origem\n");
        printf("\t2 - Aeroporto Destino\n");
        printf("\t3 - Codigo do Aeroporto\n");
        printf("\t4 - Quantidade de Voos\n");
        fflush(stdin);
        printf("Opcao: ");
        scanf("%c", &op);
        if (op == '0')
            break;

        int cod;
        switch (op)
        {
        case '1':
            printf("\nEntre com o codigo do Aeroporto de Origem: ");
            scanf("%d", &cod);

            for (controle = 0; controle < tamanho; controle++)
            {
                if (controleVoos[controle].codAeroOrigem == cod)
                {
                    printf("\tAeroporto de Origem: %d\n", controleVoos[controle].codAeroOrigem);
                    printf("\tAeroporto de Destino: %d\n", controleVoos[controle].codAeroDestino);
                }
            }
            break;

        case '2':
            printf("\nEntre com o codigo do Aeroporto de Destino: ");
            scanf("%d", &cod);

            for (controle = 0; controle < tamanho; controle++)
            {
                if (controleVoos[controle].codAeroDestino == cod)
                {
                    printf("\tAeroporto de Origem: %d\n", controleVoos[controle].codAeroOrigem);
                    printf("\tAeroporto de Destino: %d\n", controleVoos[controle].codAeroDestino);
                }
            }
            break;

        case '3':
            printf("\nEntre com o codigo do Aeroporto: ");
            scanf("%d", &cod);

            for (controle = 0; controle < tamanho; controle++)
            {
                if (controleAeroportos[controle].codigo == cod)
                {
                    printf("\tCodigo do AeroPorto: %d\n", controleAeroportos[controle].codigo);
                    printf("\tQuantidade de Voos que Chegam: %d\n", controleAeroportos[controle].qtdVoosChegam);
                    printf("\tQuantidade de Voos que Saem: %d\n", controleAeroportos[controle].qtdVoosSaem);
                }
            }
            break;

        case '4':
            printf("\nEntre com a quantidade de voos desejada: ");
            scanf("%d", &cod);

            for (controle = 0; controle < tamanho; controle++)
            {
                if (controleAeroportos[controle].qtdVoosChegam == cod || controleAeroportos[controle].qtdVoosSaem == cod)
                {
                    printf("\tCodigo do Aeroporto: %d\n", controleAeroportos[controle].codigo);
                    printf("\tQuantidade de voos que chegam: %d\n", controleAeroportos[controle].qtdVoosChegam);
                    printf("\tQuantidade de voos que saem: %d\n", controleAeroportos[controle].qtdVoosSaem);
                }
            }
            break;
        }
    } while (op != '0');
}

int main()
{
    printf("Exercicio 19\n\n");
    cadAeroportos();
    cadVoos();
    buscaVoos();
    return 0;
}
