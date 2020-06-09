#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alfabeto [] [26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

    char p1, p2;
    int posicao1, posicao2;
    printf("Entre com a primeira letra: ");
    scanf("%c",&p1);
    fflush(stdin);
    printf("Entre com a segunda letra: ");
    scanf("%c",&p2);

    for(int i = 0;i <= 26; i++)
    {
        if (p1 == alfabeto[i])
        {
            posicao1 = i;
        }
        if (p2 == alfabeto[i])
        {
            posicao2 = i;
        }
    }

    if (posicao1 > posicao2)
    {
        printf("%c e maior que %c",p1,p2);
    }
    else
    {
        printf("%c e maior que %c",p2,p1);
    }
    system("pause");
}
