#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    ex14();
    return 0;
}

void ex14()
{
    float trablab, avalsem, exfinal, mediafinal;
    printf("\nNota Final estudante");
    printf("\nQual a nota do Trabalho de Laboratório: ");
    scanf("%f",&trablab);
    printf("\nQual a nota da Avaliação Semestral: ");
    scanf("%f",&avalsem);
    printf("\nQual a nota do Exame Final: ");
    scanf("%f",&exfinal);

    if (trablab > 10 || trablab < 0 || avalsem < 0 || avalsem > 10 || exfinal < 0 || exfinal > 10)
        {
            printf("\nA nota não pode ser maior que 10 ou menor que 0");
        }
    else
        {
            mediafinal = (trablab*2 + avalsem*3 + exfinal*5)/10;
            printf("\nMédia Final: %.1f", mediafinal);
            if (mediafinal < 3){
                printf("\nVocê está REPROVADO!");
            }
            else if (mediafinal < 5) {
                printf("\nVocê está de RECUPERAÇÃO!");
            }
            else {
                printf("\nVocê foi APROVADO!");
            }
        }
}
