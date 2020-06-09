#include <stdio.h>
#include <stdlib.h>


float imposto(float s)
{
    float porcent;
    if(s <= 1.903)
    {
            return s;
    }
    else if(s > 1.903 && s <= 2.826)
    {
            porcent = (s/7.5)*100;
            return porcent;
    }
    else if(s > 2.826 && s <= 3.751)
    {
            porcent = (s/15)*100;
            return porcent;
    }
    else if(s > 3.751 && s <= 4.664)
    {
            porcent = (s/22.5)*100;
            return porcent;
    }
    else
    {
            porcent = (s/27.5)*100;
            return (porcent);
    }
}

float salario(float s)
{
    if(s >= 15.000)
    {
        s = s + (s*10)/100;
        return s;
    }
    else if(s >= 7.500 && s <= 15.000 )
    {
        s = s + (s*20)/100;
        return s;
    }
    else if(s >= 1.000 && s <= 7.500)
    {
        s = s + (s*30)/100;
        return s;
    }
    else
    {
        s = s + (s*40)/100;
        return s;
    }
}


int main()
{
    float s;
    printf("Entre com seu salario: ");
    scanf("%f", &s);
    int op;
    printf("Escolha uma opção: \n1-Imposto\n2-Novo salario\n3-Classificação\n");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
            s = imposto(s);
            printf("%f",s);
        break;
        case 2:
            s = salario(s);
            printf("%f",s);
        break;
        case 3:
            if(s >= 7.500)
            {
                printf("Bem remunerado");
            }
            else
            {
                printf("Mal remunerado");
            }
        break;
    }
    getche();
}
