#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float valor;
    int op;
    setlocale(LC_ALL,"Portuguese");
    printf("Exercicio 24!\n");


    while(op != 0){
        printf("Entre com o valor do produto.\n");
        scanf("%f", &valor);

        printf("Escolha um estado\n1-SP\n2-MG\n3-RJ\n4-MS\n");
        scanf("%d", &op);
        if(op == 1)
        {
            valor = valor + (valor*12)/100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else if(op == 2)
        {
            valor = valor + (valor*7)/100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else if(op == 3)
        {
            valor = valor + (valor*15)/100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else if(op == 4)
        {
            valor = valor + (valor*8)/100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else
        {
            printf("Entre com um valor válido!\n");
        }
    }

}
