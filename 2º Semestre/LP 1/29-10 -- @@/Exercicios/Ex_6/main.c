#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Matricula, Nome, C�digo da Disciplina, Nota1 e Nota2
int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct ficha_aluno
    {
        char matricula[10];
        char nome[40];
        int cod_disc;
        float nota1;
        float nota2;
    };
    struct ficha_aluno aluno[10];

    for (int i = 0; i < 10; i++)
    {
        printf("-------Cadastro Ficha de Aluno-------\n");

        printf("\nMatr�cula do Aluno: ");
        fflush(stdin);
        gets(aluno[i].matricula);

        printf("\nNome do aluno: ");
        fflush(stdin);
        gets(aluno[i].nome);

        printf("\nC�digo da Disciplina: ");
        fflush(stdin);
        scanf("%d", &aluno[i].cod_disc);

        printf("\nNota 1: ");
        fflush(stdin);
        scanf("%f",&aluno[i].nota1);

        printf("\nNota 2: ");
        fflush(stdin);
        scanf("%f",&aluno[i].nota2);
        printf("\n");

    }


for (int i = 0; i < 10; i++)
    {
        printf("\n-------Ficha do Aluno-------\n");
        printf("\nMatr�cula do Aluno: %s", aluno[i].matricula);
        printf("\nNome do aluno: %s", aluno[i].nome);
        printf("\nC�digo da Disciplina: %d", aluno[i].cod_disc);
        printf("\nNota 1: %1.f", aluno[i].nota1);
        printf("\nNota 2: %1.f", aluno[i].nota2);
        float media = ((aluno[i].nota1*1+aluno[i].nota2*2)/3);
        printf("\nM�dia: %1.f", media);
    }
}




