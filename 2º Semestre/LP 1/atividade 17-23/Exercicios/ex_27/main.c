#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

char * remove_espacos(char * out, char * in)
{
    const char * p = in;
    int i = 0;

    while( *p )
    {
        if(!isspace(*p))
            out[i++] = *p;
        p++;
    }

    out[i] = 0;

    return out;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char * frase[100];
    char frasesemespaco[100] = {0};
    char inverso[100];
    int i, valor = 0;

    printf("Digite uma frase:\n");
    gets(frase);

    remove_espacos(frasesemespaco, frase);

    for(i = 0; frasesemespaco[i]; i++)
    {
        frasesemespaco[i] = toupper(frasesemespaco[i]);
    }

    strcpy(inverso,frasesemespaco);
    strrev(inverso);

    valor = strcmp(frasesemespaco, inverso);

    printf("\nFrase: %s\nInvertida: %s",frasesemespaco, inverso);

    if (valor == 0)
    {
        printf("\nA frase É um palíndromo!");
    }
    else
    {
        printf("\nA frase NÃO É um palíndromo!");
    }
}














