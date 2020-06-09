#include <stdio.h>
#include <stdlib.h>


   typedef struct horarios {
        char hora[10];
        char minuto[10];
        char segundos[10]
}horarios;
horarios hour[1];
    typedef struct data {
        char dia[10];
        char mes[10];
        char ano[10]
}data;
data date[1];
    typedef struct compromisso {
        char texto[255];
}compromisso;
compromisso comm[1];

void main()
{
      printf("Informe a hora: ");
      fflush(stdin);
      scanf("%s",&hour[0].hora);

      printf("Informe os minuto: ");
      fflush(stdin);
      scanf("%s",&hour[0].minuto);

      printf("Informe os segundos: ");
      fflush(stdin);
      scanf("%s",&hour[0].segundos);

      printf("Informe o dia: ");
      fflush(stdin);
      scanf("%s",&date[0].dia);

      printf("Informe o mes: ");
      fflush(stdin);
      scanf("%s",&date[0].mes);

      printf("Informe o ano: ");
      fflush(stdin);
      scanf("%s",&date[0].ano);

      printf("Informe a descricao do compromisso: ");
      fflush(stdin);
      scanf("%s",&comm[0].texto);

      printf("\n%s:",hour[0].hora);
      printf("%s:",hour[0].minuto);
      printf("%s",hour[0].segundos);
      printf("\n%s/",date[0].dia);
      printf("%s/",date[0].mes);
      printf("%s",date[0].ano);
      printf("\n%s",comm[0].texto);


getch();
}
