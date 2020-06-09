#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Valida��o de RG�s\n\n");

    int nRgs, n, i, p;

    printf("Entre com o n�mero de pessoas: ");
    scanf("%d", &nRgs);

    int rg[nRgs][9];

    for (n = 0; n < nRgs; n++)
    {
        printf("Entre com os d�gitos do RG:\n ");
        for (i = 0; i < 9; i++)
        {
            printf("%d: ", i + 1);
            scanf("%d", &rg[n][i]);
            int cont = 0;
            for (p = 0; p < 10; p++)
            {
                if (rg[n][i] != p)
                {
                    cont++;
                    if (cont > 9)
                    {
                        printf("Valor inserido n�o � um n�mero!\n");
                        exit(1);
                    }
                }
            }
            fflush(stdin);
        }
    }

    printf("\nRG�s que come�am com 2: \n");
    for (n = 0; n < nRgs; n++)
    {
        if (rg[n][0] == 2)
        {
            printf("%d%d.%d%d%d.%d%d%d-%d\n", rg[n][0], rg[n][1], rg[n][2], rg[n][3], rg[n][4], rg[n][5], rg[n][6], rg[n][7], rg[n][8]);
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
