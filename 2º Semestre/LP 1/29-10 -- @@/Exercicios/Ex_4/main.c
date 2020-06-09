#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usu´ ario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior m´edia geral.
(d) Encontre o aluno com menor m´edia geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac¸ ˜ao.*/
typedef struct {
        int matricula;
        char nome[100];
        float nota1;
        float nota2;
        float nota3;
        float media;
        char situacao[10];
} Aluno;

Aluno cadastro[5];
int main()
{
    setlocale(LC_ALL,"Portuguese");
    for(int i = 0; i < 5; i++)
    {
        printf("\nInforme o nome do Aluno: ");
        fflush(stdin);
        scanf("%s",&cadastro[i].nome);

        printf("\nInforme a matricula do Aluno: ");
        fflush(stdin);
        scanf("%d",&cadastro[i].matricula);

        printf("\nInforme a primeira nota do Aluno: ");
        fflush(stdin);
        scanf("%f",&cadastro[i].nota1);

        printf("\nInforme a segunda nota do Aluno: ");
        fflush(stdin);
        scanf("%f",&cadastro[i].nota2);

        printf("\nInforme a terceira nota do Aluno: ");
        fflush(stdin);
        scanf("%f",&cadastro[i].nota3);

        cadastro[i].media = (cadastro[i].nota1 + cadastro[i].nota2 + cadastro[i].nota3)/3;


    }
    int del;
    float maiormedia = 0.0;
    float menormedia = 10.0;
    float maiornota = 0.0;
    for(int i = 0; i < 5; i++)
    {
       if(cadastro[i].media > maiormedia)
     {
         maiormedia = cadastro[i].media;
     }
     if(cadastro[i].media < menormedia)
     {
         menormedia = cadastro[i].media;
     }
     if(cadastro[i].nota1 > maiornota)
     {
        maiornota = cadastro[i].nota1;
     }
    }

    for(int i = 0; i < 5; i++)
    {
        if(cadastro[i].media >= 6.0)
        {
            strcpy(cadastro[i].situacao,"Aprovado");
        }
        else
        {
            strcpy(cadastro[i].situacao,"Reprovado");
        }
    }

    for(int i = 0; i < 5; i++)
    {
        if(cadastro[i].nota1 == maiornota)
        {
            printf("Nome: %s \n",cadastro[i].nome);
            printf("Matricula: %d \n",cadastro[i].matricula);
            printf("Primeira Nota: %f \n",cadastro[i].nota1);
            printf("Segunda Nota: %f \n",cadastro[i].nota2);
            printf("Terceira Nota: %f \n",cadastro[i].nota3);
            printf("Media do Aluno: %f \n",cadastro[i].media);
            printf("Situacao: %s \n",cadastro[i].situacao);
            del = i;
        }
    }
      for(int i = 0; i < 5; i++)
    {
        if(i == del)
        {
            continue;
        }
        else if(cadastro[i].media == maiormedia)
        {
            printf("Nome: %s \n",cadastro[i].nome);
            printf("Matricula: %d \n",cadastro[i].matricula);
            printf("Primeira Nota: %f \n",cadastro[i].nota1);
            printf("Segunda Nota: %f \n",cadastro[i].nota2);
            printf("Terceira Nota: %f \n",cadastro[i].nota3);
            printf("Media do Aluno: %f \n",cadastro[i].media);
            printf("Situacao: %s \n",cadastro[i].situacao);
        }
        else if(cadastro[i].media == menormedia)
        {
            printf("Nome: %s \n",cadastro[i].nome);
            printf("Matricula: %d \n",cadastro[i].matricula);
            printf("Primeira Nota: %f \n",cadastro[i].nota1);
            printf("Segunda Nota: %f \n",cadastro[i].nota2);
            printf("Terceira Nota: %f \n",cadastro[i].nota3);
            printf("Media do Aluno: %f \n",cadastro[i].media);
            printf("Situacao: %s \n",cadastro[i].situacao);
        }
        else
        {
            printf("Nome: %s \n",cadastro[i].nome);
            printf("Matricula: %d \n",cadastro[i].matricula);
            printf("Primeira Nota: %f \n",cadastro[i].nota1);
            printf("Segunda Nota: %f \n",cadastro[i].nota2);
            printf("Terceira Nota: %f \n",cadastro[i].nota3);
            printf("Media do Aluno: %f \n",cadastro[i].media);
            printf("Situacao: %s \n",cadastro[i].situacao);
        }
    }

}


