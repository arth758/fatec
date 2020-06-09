#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faca um programa que gerencie o estoque de um mercado e:
• Crie e leia um vetor de 5 produtos, com os dados: codigo (inteiro), nome (maximo
15 letras), preco e quantidade.
• Leia um pedido, composto por um codigo de produto e a quantidade. Localize
este codigo no vetor e, se houver quantidade suficiente para atender ao pedido
integralmente, atualize o estoque e informe o usuario. Repita este processo ate ler
um codigo igual a zero.
Se por algum motivo nao for possıvel atender ao pedido, mostre uma mensagem informando qual erro ocorreu.*/

typedef struct prod
{
    int codigo, quantidade;
    char nome[16];
    float preco;
} PRODUTO;

typedef struct pdd
{
    int codigo, quantidade;
} PEDIDO;

PRODUTO produtos[5];
PEDIDO compra;
int controle, tamanho = 2;

void insereProduto()
{
    printf("Entre com os PRODUTOS:");
    for (controle = 0; controle < tamanho; controle++)
    {
        printf("\n\tNome: ");
        fflush(stdin);
        gets(produtos[controle].nome);

        printf("\tCodigo: ");
        fflush(stdin);
        scanf("%d", &produtos[controle].codigo);

        printf("\tPreco: ");
        scanf("%f", &produtos[controle].preco);
        fflush(stdin);

        printf("\tQuantidade: ");
        fflush(stdin);
        scanf("%d", &produtos[controle].quantidade);
    }
}

void procura()
{
    printf("\nBusca de Produto");
    int codigo, quantidade;
    do
    {
        printf("\n\n\tCodigo: ");
        fflush(stdin);
        scanf("%d", &codigo);
        if (codigo == 0)
            break;

        printf("\tQuantidade: ");
        fflush(stdin);
        scanf("%d", &quantidade);

        for (controle = 0; controle < tamanho; controle++)
        {
            if (produtos[controle].codigo == codigo)
            {
                if (produtos[controle].quantidade <= 0)
                {
                    printf("\n\tQuantidade Insuficiente!!\n");
                    break;
                }
                else
                {
                    if (quantidade > produtos[controle].quantidade)
                    {
                        printf("\n\tQuantidade Insuficiente!!\n");
                        break;
                    }
                    else
                    {
                        printf("\n\tProduto Encontrado!");
                        printf("\n\t\tNome: %s", produtos[controle].nome);
                        printf("\n\t\tValor da compra: %2.f", (produtos[controle].preco * quantidade));
                        produtos[controle].quantidade = produtos[controle].quantidade - quantidade;
                    }
                }
            }
        }
    } while (codigo != 0);
}

int main()
{
    printf("Exercicio 18\n\n");
    insereProduto();
    procura();
    printf("\nFinalizando...\n");
    return 0;
}
