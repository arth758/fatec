#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/*Fac¸a um programa que leia um vetor com dados de 5 livros: t´ıtulo (maximo 30 letras), ´
autor (maximo 15 letras) e ano. Procure um livro por t ´ ´ıtulo, perguntando ao usuario qual ´
t´ıtulo deseja buscar. Mostre os dados de todos os livros encontrados.*/

typedef struct dado
{
    char titulo[31], autor[16];
    int ano;
} LIVRO;

int tamanho = 5;
int controle = 0;
LIVRO cadastro[5];

void insere()
{
    for (controle; controle < tamanho; controle++)
    {
        printf("Titulo #%d: ", controle + 1);
        fflush(stdin);
        gets(cadastro[controle].titulo);
        printf("Autor #%d: ", controle + 1);
        fflush(stdin);
        gets(cadastro[controle].autor);
        printf("Ano Lancamento #%d: ", controle + 1);
        fflush(stdin);
        scanf("%d", &cadastro[controle].ano);
        printf("\n");
    }
}

void procura()
{
    printf("Qual titulo deseja buscar ?\n");
    char busca[31];
    fflush(stdin);
    gets(busca);
    for (controle = 0; controle < tamanho; controle++)
    {
        int retorno = strcmp(busca, cadastro[controle].titulo);
        if (retorno == 0)
        {
            printf("\nLivro Encontrado!\n");
            printf("Titulo: %s\n", cadastro[controle].titulo);
            printf("Autor: %s\n", cadastro[controle].autor);
            printf("Ano: %d\n", cadastro[controle].ano);
        }
    }
}

int main()
{
    printf("Exercicio 15\n\n");
    printf("Entrada de Dados\n");
    insere();
    printf("Procura de Livros\n");
    procura();
    return 0;
}
