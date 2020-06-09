#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct cadastro {
        char nome[30];
        char age[3];
        char ende[50];
}pessoa;
pessoa registro[1];
void main()
{
      printf("Informe seu nome: ");
      fflush(stdin);
      scanf("%s",&registro[0].nome);

      printf("Informe sua idade: ");
      fflush(stdin);
      scanf("%s",&registro[0].age);

      printf("Informe seu endereco: ");
      fflush(stdin);
      scanf("%s",&registro[0].ende);

      printf("\n%s",registro[0].nome);
      printf("\n%s",registro[0].age);
      printf("\n%s",registro[0].ende);


getch();
}
