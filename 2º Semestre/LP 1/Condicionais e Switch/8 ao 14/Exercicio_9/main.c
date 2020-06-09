#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
    float salario, prestacao;

printf("Informe seu salário: ");

    scanf("%f", &salario);

printf("Informe o valor da prestação: ");

    scanf("%f", &prestacao);

if(prestacao > salario * 0.2)

{

    printf("Empréstimo não Concedido!");

}

    else

{

    printf("Empréstimo Concedido!");

}

}
