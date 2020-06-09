#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 39\n");

    float salarioAtual, salarioFinal;
    int tempoServico, reajuste, bonus;

    printf("Entre com o salario do funcionario: ");
    scanf("%f", &salarioAtual);
    printf("Entre com o tempo de servico (em anos) do mesmo: ");
    scanf("%i", &tempoServico);

    if(salarioAtual <= 500)
    {
        reajuste = 0.25;
        if(tempoServico < 1)
        {
            bonus = 0;
        }
        else if(tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if(tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if(tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else if(salarioAtual > 500 && salarioAtual <= 1000)
    {
        reajuste = 0.2;
        if(tempoServico < 1)
        {
            bonus = 0;
        }
        else if(tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if(tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if(tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else if(salarioAtual > 1000 && salarioAtual <= 1500)
    {
        reajuste = 0.15;
        if(tempoServico < 1)
        {
            bonus = 0;
        }
        else if(tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if(tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if(tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else if(salarioAtual > 1500 && salarioAtual <= 2000)
    {
        reajuste = 0.1;
        if(tempoServico < 1)
        {
            bonus = 0;
        }
        else if(tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if(tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if(tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else
    {
        reajuste = 0;
        if(tempoServico < 1)
        {
            bonus = 0;
        }
        else if(tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if(tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if(tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }

    salarioFinal = (salarioAtual + (salarioAtual * reajuste)) + bonus;

    printf("\nSalario final eh igual a R$%.2f\n", salarioFinal);
    return 0;
}
