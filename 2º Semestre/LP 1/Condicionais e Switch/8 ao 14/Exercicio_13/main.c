#include <stdio.h>
#include <stdlib.h>

int main()
{
   float n1, n2, n3, media;


   printf("Insira a primeira nota do aluno ");
   scanf("%f",&n1);
   printf("Insira a segunda nota do aluno ");
   scanf("%f",&n2);
   printf("Insira a teceira nota do aluno ");
   scanf("%f",&n3);

   media = ((n1 + n2)+(n3 * 2) ) /5;

   if(media >= 6)
    {
    printf("Aluno Aprovado");
   }
   else
   {
       printf("Aluno Reprovado");
   }
}
