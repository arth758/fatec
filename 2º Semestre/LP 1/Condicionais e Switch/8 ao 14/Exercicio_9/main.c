#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
    float salario, prestacao;

printf("Informe seu sal�rio: ");

    scanf("%f", &salario);

printf("Informe o valor da presta��o: ");

    scanf("%f", &prestacao);

if(prestacao > salario * 0.2)

{

    printf("Empr�stimo n�o Concedido!");

}

    else

{

    printf("Empr�stimo Concedido!");

}

}
