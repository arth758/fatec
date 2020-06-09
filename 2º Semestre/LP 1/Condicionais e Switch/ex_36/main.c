#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercício 36\n");

    float valVenda, valFinal, valComissao, pctagem;

    printf("Entre com o valor da venda: ");
    scanf("%f", &valVenda);

    if(valVenda >= 100000)
    {
        pctagem = 0.16;
        valComissao = 700;
    }
    else if(valVenda >= 80000 && valVenda < 100000)
    {
        pctagem = 0.14;
        valComissao = 650;
    }
    else if(valVenda >= 60000 && valVenda < 80000)
    {
        pctagem = 0.14;
        valComissao = 600;
    }
    else if(valVenda >= 40000 && valVenda < 60000)
    {
        pctagem = 0.14;
        valComissao = 550;
    }
    else if(valVenda >= 20000 && valVenda < 40000)
    {
        pctagem = 0.14;
        valComissao = 500;
    }
    else if(valVenda < 20000)
    {
        pctagem = 0.14;
        valComissao = 400;
    }

    printf("\nValor a ser recebido: R$ %0.f,00", (valComissao + (valVenda * (pctagem))));
    return 0;
}
