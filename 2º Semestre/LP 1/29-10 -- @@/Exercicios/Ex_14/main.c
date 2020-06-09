#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Fac¸a um programa que leia um vetor com os dados de 5 carros: marca (m´aximo 15
letras), ano e prec¸o. Leia um valor p e mostre as informac¸ ˜oes de todos os carros com
prec¸o menor que p. Repita este processo at ´e que seja lido um valor p = 0.*/

typedef struct dados
{
    char marca[15];
    char ano[5];
    float preco;
}Carros;

Carros tabela[5];
int main()
{
    setlocale(LC_ALL,"portuguese");
    float p = 1.0;
    for(int i = 0; i < 5; i++)
    {
        printf("Entre com a marca do veiculo: ");
        scanf("%s",&tabela[i].marca);

        printf("Entre com o ano do veiculo: ");
        scanf("%s",&tabela[i].ano);

        printf("Entre com o preço: ");
        scanf("%f",&tabela[i].preco);
    }
    while(p != 0)
    {
        printf("Entre com o preço maximo que vc esta disposta a pagar: ");
        scanf("%f",&p);

        if(p == 0)
        {
            break;
        }
        else
        {
        for(int i = 0; i < 5; i++)
        {
            if(tabela[i].preco < p)
            {
                printf("Marca: %s \n",tabela[i].marca);
                printf("Ano: %s \n",tabela[i].ano);
                printf("Preço: %f \n\n\n",tabela[i].preco);
            }
        }
        }
    }

}
