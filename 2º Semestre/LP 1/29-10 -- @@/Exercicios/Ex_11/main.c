#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct dados
{
    char nome[30];
    char matricula[10];
    float media;
}cadastro;

cadastro aluno[10];
cadastro aprovados[10];
cadastro reprovados[10];
void divisao()
{
    int x = 0, j = 0;
    for(int i = 0; i < 10;i++)
    {
        if(aluno[i].media >= 5.0)
        {
            aprovados[j] = aluno[i];
            j++;
        }
        else
        {
            reprovados[x] = aluno[i];
            x++;
        }
    }
}
int main()
{
    setlocale(LC_ALL,"portuguese");

    for(int i = 0; i < 10;i++)
    {
        printf("\nDigite o seu nome:");
        fflush(stdin);
        scanf("%s",&aluno[i].nome);

        printf("\nDigite o seu matricula: ");
        fflush(stdin);
        scanf("%s",&aluno[i].matricula);

        printf("\nDigite o seu media: ");
        fflush(stdin);
        scanf("%f",&aluno[i].media);
    }
    divisao();
    for(int i = 0; i < 10;i++)
    {
        printf("APROVADOS\n\n");
        printf("%d: %s \t",i,aprovados[i].nome);
        printf("%d: %s \t",i,aprovados[i].matricula);
        printf("%d: %f \t",i,aprovados[i].media);
        printf("\n\n");


    }
    for(int i = 0; i < 10;i++)
    {
        printf("REPROVADOS\n\n");
        printf("%d: %s \t",i,reprovados[i].nome);
        printf("%d: %s \t",i,reprovados[i].matricula);
        printf("%d: %f \t",i,reprovados[i].media);
        printf("\n\n");
    }
}
