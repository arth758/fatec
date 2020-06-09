#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Fac¸a um programa que controla o consumo de energia dos eletrodomesticos de uma ´
casa e:
• Crie e leia 5 eletrodomesticos que cont ´ em nome (m ´ aximo 15 letras), pot ´ encia (real, ˆ
em kW) e tempo ativo por dia (real, em horas).
• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodomestico (consumo/consumo total) nesse per ´ ´ıodo de tempo.
Apresente este ultimo dado em porcentagem.*/

const int tamanho = 2;
int controle, consumoTotal = 0, nDias;

typedef struct watts
{
    int real, emKw;
} POTENCIA;

typedef struct dia
{
    int real, emHoras;
} TEMPO;

typedef struct produto
{
    float consumo;
    char nome[16];
    POTENCIA pot[5];
    TEMPO tmp[5];
} ELETRO;

ELETRO eletrodomestico[5];

void cadastroEletro()
{
    for (controle = 0; controle < tamanho; controle++)
    {
        printf("Eletrodomestico #%d\n", controle + 1);
        printf("\tNome: ");
        gets(eletrodomestico[controle].nome);
        fflush(stdin);

        printf("\tPotencia real: ");
        scanf("%d", &eletrodomestico[controle].pot[controle].real);
        fflush(stdin);

        printf("\tPotencia em KW: ");
        scanf("%d", &eletrodomestico[controle].pot[controle].emKw);
        fflush(stdin);

        printf("\tTempo ativo real por dia: ");
        scanf("%d", &eletrodomestico[controle].tmp[controle].real);
        fflush(stdin);

        printf("\tTempo ativo em horas por dia: ");
        scanf("%d", &eletrodomestico[controle].tmp[controle].emHoras);
        fflush(stdin);
    }
}

void calculo()
{
    printf("\nEntre com o numero de dias: ");
    scanf("%d", &nDias);
    for (controle = 0; controle < tamanho; controle++)
    {
        eletrodomestico[controle].consumo =
            (eletrodomestico[controle].pot[controle].emKw *
             eletrodomestico[controle].tmp[controle].emHoras *
             nDias) /
            1000;
        consumoTotal += eletrodomestico[controle].consumo;
    }
}

void exibicao()
{
    printf("\nNumero de Dias: %d", nDias);
    printf("\nConsumo Total da Casa: %dKw", consumoTotal);
    printf("\nConsumo dos Eletrodomesticos nesse periodo de tempo:\n");
    for (controle = 0; controle < tamanho; controle++)
    {
        printf("\n\tEletrodomestico: %s\n", eletrodomestico[controle].nome);
        printf("\t\tConsumo: %2.fKw/h\n", eletrodomestico[controle].consumo);

        double consumoRelativo = (eletrodomestico[controle].consumo / consumoTotal) * 100;
        printf("\t\tConsumo Relativo: %2.f%\n", consumoRelativo);
    }
}

int main()
{
    printf("Exercicio 17\n\n");
    cadastroEletro();
    calculo();
    exibicao();
    return 0;
}
