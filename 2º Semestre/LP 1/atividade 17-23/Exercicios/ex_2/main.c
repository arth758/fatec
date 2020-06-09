#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void rmv(char *frasePQR)
{
    int count=0,i;
    for(i=0;frasePQR[i];i++){
        if(frasePQR[i]!=' '){
            frasePQR[count++]=frasePQR[i];
        }
    }
    frasePQR[count]=0;
}
int main()
{
    setlocale(LC_ALL," ");
    char frasePQR[100];

    printf("Entre com a frase codificada: \n");
    gets(frasePQR);

    int tamanho;
    tamanho = strlen(frasePQR);

    for(int i = 0; i < tamanho; i++)
    {

        if(frasePQR[i] == 'P' || frasePQR[i + 1] == 'Q')
        {
            frasePQR[i] = ' ';
            frasePQR[i + 1] = ' ';
        }
    }
    //char descod [100];
    rmv(frasePQR);

    int tamanho2;
    tamanho2 = strlen(frasePQR);
    for(int i = 0;i < tamanho2; i++)
    {
        if(frasePQR[i] == 'R')
        {
            frasePQR[i] = ' ';
        }
    }
    printf("A frase descodificada e: \n%s",frasePQR);
    system("pause");
}
