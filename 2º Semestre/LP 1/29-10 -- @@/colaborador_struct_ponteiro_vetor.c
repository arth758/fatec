#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 10000

typedef struct colaborador
{
    char nome[21];
    float salario;
} COLABOR;

void main()
{
    COLABOR *c[MAX];
    char no[21];
    int i, n;
    setlocale(LC_ALL, "Portuguese");
    printf("\nQuantos registros?");
    while (!scanf("%d", &n))
    {

        while (getchar() != '\n')
            printf("\nQuantos registros?");
    }
    for (i = 0; i < n; i++)
    {
        c[i] = malloc(sizeof(COLABOR));
        printf("\nNome: ");
        fflush(stdin);
        fgets(no, 21, stdin);
        strcpy(c[i]->nome, no);
        printf("\nSalario: ");

        scanf("%f", &c[i]->salario);
    }

    printf("\nNome: %s", c[1]->nome);
    printf("\nSalario: %.2f", c[1]->salario);
}
