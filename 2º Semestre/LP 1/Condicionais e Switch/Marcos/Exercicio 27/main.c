#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7)
    {
        printf("Infantil A");
    }
    else if(idade > 7 && idade <= 10)
    {
        printf("Infantil B");
    }
    else if(idade > 10 && idade <= 13)
    {
        printf("Juvenil A");
    }
    else if(idade > 13 && idade <= 17)
    {
        printf("Juvenil B");
    }
    else
    {
        printf("Senior");
    }
}
