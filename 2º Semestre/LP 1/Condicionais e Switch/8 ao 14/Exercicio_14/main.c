#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nlab = 0, nsem = 0, nfin = 0, media = 0;

printf("\nDigite a nota do Laboratório: ");
scanf("%f",&nlab);

printf("\nDigite a nota da Avaliação Semestral: ");
scanf("%f",&nsem);

printf("\nDigite a nota da Avaliação Final: ");
scanf("%f",&nfin);

media = (nlab*2 + nsem*3 + nfin*5)/10;

if (media>=5)
{
    printf("\nSua media = %.2f\nAprovado\n",media);
}

else if (media<5 && media>=3)
{
    printf("\nSua media = %.2f\nRecuperação\n",media);
}
 else
 {
     printf("\nSua media = %.2f\nReprovado\n",media);
 }
system("pause");
}
