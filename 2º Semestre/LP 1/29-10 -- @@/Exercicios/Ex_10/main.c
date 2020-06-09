#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
typedef struct cadastro
{
    char nome[30];
    char end[50];
    char tel[15];
}pessoa;
pessoa registro[5];

void ordenaNomes(int tamanho){
    char sNomeAux[30];
    for( int i = 1; i < tamanho; i++ ) {
        for( int j = i; j > 0; j-- ) {
            if( strcoll(registro[j].nome, registro[j - 1].nome) < 0){
              strcpy(sNomeAux,registro[j].nome);
              strcpy(registro[j].nome,registro[j - 1].nome);
              strcpy(registro[j - 1].nome,sNomeAux);}
        }
    }
}
int main()
{

    setlocale(LC_ALL,"portuguese");
    for(int i = 0; i < 5;i++)
    {
        printf("\nDigite o seu nome:");
        fflush(stdin);
        scanf("%s",&registro[i].nome);

        printf("\nDigite o seu endereço: ");
        fflush(stdin);
        scanf("%s",&registro[i].end);

        printf("\nDigite o seu telefone: ");
        fflush(stdin);
        scanf("%s",&registro[i].tel);
    }
    ordenaNomes(5);
    for(int i = 0; i < 5;i++)
    {
        printf("%d: %s \t",i,registro[i].nome);
        printf("%d: %s \t",i,registro[i].end);
        printf("%d: %s \t",i,registro[i].tel);
        printf("\n\n");
    }
}
