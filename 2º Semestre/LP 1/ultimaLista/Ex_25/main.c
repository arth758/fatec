#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Faca um programa gerenciar uma agenda de contatos. Para cada contato armazene o
nome, o telefone e o aniversario (dia e mes). O programa deve permitir
(a) inserir contato
(b) remover contato
(c) pesquisar um contato pelo nome
(d) listar todos os contatos
(e) listar os contatos cujo nome inicia com uma dada letra
(f) imprimir os aniversariantes do mes.
Sempre que o programa for encerrado, os contatos devem ser armazenados em um
arquivo binario. Quando o programa iniciar, os contatos devem ser inicializados com os
dados contidos neste arquivo binario*/

typedef struct dado
{
    char nome[41], telefone[12], dia[3], mes[3];
} AGENDA;

FILE *fileAgenda;
AGENDA contatos[1000];
int tamanho, control;

void insere()
{
    fileAgenda = fopen("agenda.txt", "at");

    printf("\tNome: ");
    fflush(stdin);
    gets(contatos[control].nome);
    fputs(contatos[control].nome, fileAgenda);
    fputs("\n", fileAgenda);

    printf("\tTelefone: ");
    fflush(stdin);
    gets(contatos[control].telefone);
    fputs(contatos[control].telefone, fileAgenda);
    fputs("\n", fileAgenda);

    printf("\tDia do Aniversário: ");
    fflush(stdin);
    gets(contatos[control].dia);
    fputs(contatos[control].dia, fileAgenda);
    fputs("\n", fileAgenda);

    printf("\tMês do Aniversário: ");
    fflush(stdin);
    gets(contatos[control].mes);
    fputs(contatos[control].mes, fileAgenda);
    fputs("\n\n", fileAgenda);

    fclose(fileAgenda);
}

void exibe()
{
    fileAgenda = fopen("agenda.txt", "rt");
    rewind(fileAgenda);

    char c;
    do
    {
        c = getc(fileAgenda);
        printf("%c", c);
    } while (c != EOF);

    fclose(fileAgenda);
}

void exclui()
{
}

void pesquisaNome()
{
    fileAgenda = fopen("agenda.txt", "rt");
    rewind(fileAgenda);

    char nome[41];
    printf("Entre com o Nome a ser pesquisado: ");
    gets(nome);
    fflush(stdin);
    strcat(nome, "\n");

    char Linha[100], *result;
    printf("\n\tResultados: \n");
    while (!feof(fileAgenda))
    {
        result = fgets(Linha, 100, fileAgenda);
        if (result)
        {
            if (strcmp(result, nome) == 0)
            {
                printf("\t\tNome: %s",Linha);

                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tTelefone: %s", Linha);
                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tDia Aniversário: %s", Linha);
                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tMês Aniversário: %s", Linha);
            }
        }
    }

    fclose(fileAgenda);
}

void pesquisaLetra()
{
    fileAgenda = fopen("agenda.txt", "rt");
    rewind(fileAgenda);

    char nome;
    printf("Entre com a Letra a ser pesquisado: ");
    fflush(stdin);
    scanf("%c", &nome);

    char Linha[100], *result;
    printf("\n\tResultados: \n");
    while (!feof(fileAgenda))
    {
        result = fgets(Linha, 100, fileAgenda);
        char texto = *Linha;
        if (result)
        {
            if (texto == nome)
            {
                printf("\t\tNome: %s",Linha);

                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tTelefone: %s", Linha);
                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tDia Aniversário: %s", Linha);
                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tMês Aniversário: %s", Linha);
            }
        }
    }

    fclose(fileAgenda);
}

void aniversariantes()
{
    fileAgenda = fopen("agenda.txt", "rt");
    rewind(fileAgenda);

    int nome;
    printf("Entre com o Mês a ser pesquisado: ");
    fflush(stdin);
    scanf("%d", &nome);

    char Linha[100], *result;
    printf("\n\tResultados: \n");
    while (!feof(fileAgenda))
    {
        result = fgets(Linha, 100, fileAgenda);
        char texto = *Linha;
        if (result)
        {
            if (texto == nome)
            {
                printf("\t\tNome: %s",Linha);

                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tTelefone: %s", Linha);
                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tDia Aniversário: %s", Linha);
                result = fgets(Linha, 100, fileAgenda);
                printf("\t\tMês Aniversário: %s", Linha);
            }
        }
    }

    fclose(fileAgenda);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Exercício 25\n");
    char op;
    do
    {
        printf("\nO que deseja fazer? \n\t0 - Sair\n\t1 - Cadastrar \n\t2 - Excluir \n\t3 - Pesquisar por nome \n\t4 - Ver todos os contatos \n\t5 - Pesquisar pro letra inicial \n\t6 - Ver aniversariantes do mês");
        printf("\n\n\tOpção: ");
        scanf("%c", &op);
        fflush(stdin);

        printf("\n");
        switch (op)
        {
        case '0':
            fclose(fileAgenda);
            break;
        case '1':
            insere();
            break;

        case '2':
            exclui();
            break;

        case '3':
            pesquisaNome();
            break;

        case '4':
            exibe();
            break;

        case '5':
            pesquisaLetra();
            break;

        case '6':
            aniversariantes();
            break;

        default:
            printf("\n\tOpção indisponível!\n");
        }
    } while (op != '0');


    exit(1);
    return 0;
}
