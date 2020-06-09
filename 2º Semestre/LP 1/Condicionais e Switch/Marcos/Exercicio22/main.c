#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"Portuguese");
   int id, tp;
   printf("Exercicio 22!!\n");
   printf("\nEntre com sua idade ");
   scanf("%d", &id);
   printf("\nEntre com sua idade e tempo de trabalho, respectivamente.");
   scanf("%d", &tp);
   if(id >= 65 || tp >= 30)
    {
        printf("Ele pode aposentar!");
    }
   else
   {
        if(id >= 60 && tp >= 25)
        {
            printf("Ele pode aposentar!");
        }
        else
        {
            printf("Ele ainda não pode aposentar!");
        }
   }
}
