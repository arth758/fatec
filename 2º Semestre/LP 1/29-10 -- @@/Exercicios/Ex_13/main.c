#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Peca ao usuario para digitar seus dados pessoais (Nome, Enderec¸o, Data de Nascimento,
Cidade, CEP, email), verifique se as informac˜oes de Data de Nascimento, CEP
e email fazem sentido, e mostre ao usu´ ario as informacoes, se est˜ao todas corretas, ou
mostre que alguma informac˜ao estava errada.*/
typedef struct dados
{
    char nome[30];
    char end[50];
    char data[11];
    char city[25];
    char cep[10];
    char email[60];
}registro;

registro usuario[1];

int verificaCEP()
{
    if (strlen(usuario[0].cep) == 9)
    {
        return 1;
    }
    else
    {
        printf("Dados errados cep!");
        return 0;
    }
}

int verificaData()
{
    if (strlen(usuario[0].data) == 10)
    {
        if(usuario[0].data[2] == '/' && usuario[0].data[5] == '/')
        {
            return 1;
        }
        else
        {
            printf("Dados errados data 1!");
            return 0;
        }
    }
    else
    {
         printf("Dados errados data 2!");
        return 0;
    }
}
int verificaEmail()
{
    int aux;
    aux = strlen(usuario[0].email);
    for(int i = 0; i < aux; i++)
    {
        if(usuario[0].email[i] == '@')
        {
            return 1;
        }
    }
     printf("Dados errados email!");
    return 0;
    }
int main()
{
    setlocale(LC_ALL,"portuguese");
    for(int i = 0; i < 1;i++)
    {
        printf("\nDigite o seu nome: ");
        fflush(stdin);
        scanf("%s",&usuario[i].nome);

        printf("\nDigite o seu endereço: ");
        fflush(stdin);
        scanf("%s",&usuario[i].end);

        printf("\nDigite a sua data de nascimento(use as barras): ");
        fflush(stdin);
        scanf("%s",&usuario[i].data);

        printf("\nDigite o nome da sua cidade: ");
        fflush(stdin);
        scanf("%s",&usuario[i].city);

        printf("\nDigite o seu CEP(use o hìfem):");
        fflush(stdin);
        scanf("%s",&usuario[i].cep);

        printf("\nDigite o seu email: ");
        fflush(stdin);
        scanf("%s",&usuario[i].email);
    }
    verificaCEP();
    verificaData();
    verificaEmail();

    if (verificaCEP() == 0 || verificaData() == 0 || verificaEmail() == 0)
    {
        printf("Dados Errados!");
    }
    else
    {
    printf("Dados Corretos!!\n\n");

    printf("Nome: %s \n",usuario[0].nome);
    printf("Endereço: %s \n",usuario[0].end);
    printf("Data de nascimento: %s \n",usuario[0].data);
    printf("CEP: %s \n",usuario[0].cep);
    printf("Cidade: %s \n",usuario[0].city);
    printf("Email: %s \n",usuario[0].email);
    }
}
