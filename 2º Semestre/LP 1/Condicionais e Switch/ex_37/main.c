#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 37\n");

    int horaEntrada, minutoEntrada, horaSaida, minutoSaida, diferencaHora, diferencaMinuto;
    float valTotal = 0;

    printf("Entre com a hora e minutos de entrada(separados por : ): ");
    scanf("%i:%i", &horaEntrada, &minutoEntrada);
    printf("Entre com a hora e minutos de saida(separados por : ): ");
    scanf("%i:%i", &horaSaida, &minutoSaida);

    diferencaHora = horaSaida - horaEntrada;
    if(diferencaHora < 0) diferencaHora *= -1;
    diferencaMinuto = minutoSaida - minutoEntrada;
    if(diferencaMinuto < 0) diferencaMinuto *= -1;

    if(diferencaMinuto > 0) diferencaHora++;

    if(diferencaHora > 0 && diferencaHora <= 2)
    {
        if(diferencaHora == 1)
        {
            valTotal += 1;
        }
        else if(diferencaHora == 2)
        {
            valTotal += 2;
        }
    }
    else if(diferencaHora > 2 && diferencaHora <= 4)
    {
        if(diferencaHora == 3)
        {
            valTotal += (2 + 1.40);
        }
        else if(diferencaHora == 4)
        {
            valTotal += (2 + 2.80);
        }
    }
    else if(diferencaHora > 4)
    {
        valTotal += (2 + 2.8);
        while(diferencaHora > 0)
        {
            valTotal += 2;
            diferencaHora--;
        }
    }

    printf("Valor a ser pago: %.2f", valTotal);
    return 0;
}
