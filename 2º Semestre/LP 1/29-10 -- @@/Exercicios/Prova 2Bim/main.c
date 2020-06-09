#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct dado
{
    char bebe[40], pai[40], mae[40], data[10], hora[6], massa[6], altura[5];
} BEBE;

BEBE registro[1000];
int control = 0, aux;

void cadastraBebe()
{
    printf("\nCadastro de Bebês\n");

    fflush(stdin);
    printf("\n\tNome do Bebê: ");
    gets(registro[control].bebe);

    fflush(stdin);
    printf("\tNome do Pai: ");
    gets(registro[control].pai);

    fflush(stdin);
    printf("\tNome da Mãe: ");
    gets(registro[control].mae);

    fflush(stdin);
    printf("\tData de Nascimento (Formato: DD/MM/YYYY): ");
    gets(registro[control].data);

    fflush(stdin);
    printf("\tHora (Formato: HH:MM): ");
    gets(registro[control].hora);

    fflush(stdin);
    printf("\tMassa (em Kg): ");
    gets(registro[control].massa);

    fflush(stdin);
    printf("\tAltura (em cm): ");
    gets(registro[control].altura);
}

void nascimentoPorData(data)
{
    printf("Resultados: \n");

    aux = 0;
    for (aux; aux <= control; aux++)
    {
        /*if (registro[aux].data == data)*/
        if (strcmp(registro[aux].data, data) == 0)
        {
            printf("\nNome do Bebê: %s", registro[aux].bebe);
            printf("\nNome do Pai: %s", registro[aux].pai);
            printf("\nNome da Mãe: %s", registro[aux].mae);
            printf("\nData de Nascimento: %s", registro[aux].data);
            printf("\nHora de Nascimento: %s", registro[aux].hora);
            printf("\nMassa: %s", registro[aux].massa);
            printf("\nAltura: %s", registro[aux].altura);
        }
    }
}

void menosDe2Kg()
{
    printf("\nBebês com menos de 2kg:\n\n");

    for (aux = 0; aux < control; aux++)
    {
        if (atof(registro[aux].massa) < 2)
        {
            printf("\nNome do Bebê: %s", registro[aux].bebe);
            printf("\nNome do Pai: %s", registro[aux].pai);
            printf("\nNome da Mãe: %s", registro[aux].mae);
            printf("\nData de Nascimento: %s", registro[aux].data);
            printf("\nHora de Nascimento: %s", registro[aux].hora);
            printf("\nMassa: %s", registro[aux].massa);
            printf("\nAltura: %s", registro[aux].altura);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Maternidade - Arthur Braga Reis\n");

    char op;
    do
    {
        printf("\n\nEntre com a opção desejada: \n\t0 - Sair \n\t1 - Cadastrar Bebê \n\t2 - Pesquisar Nascimento por Data \n\t3 - Bebês que nasceram com menos de 2kg");
        printf("\nOpção: ");
        scanf("%c", &op);

        char data[11];
        switch (op)
        {
        case '1':
            cadastraBebe();
            control++;
            break;

        case '2':
            printf("\nEntre com a Data de nascimento (Formato: DD/MM/YYYY): ");
            fflush(stdin);
            gets(data);
            nascimentoPorData(data);
            break;

        case '3':
            menosDe2Kg();
            break;
        }
    } while (op != '0' && op);

    return 0;
}
