#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void verifica(int N1, int N2)
{
    if (N1 < 0 || N1 > 31)
    {
        printf("Falhou!\n");
        exit(0);
    }
    if (N2 < 0 || N2 > 1000000)
    {
        printf("Falhou!\n");
        exit(0);
    }
}

void verifica2(int N1, int N2)
{
    if (N1 > N2)
    {
        printf("Falhou!\n");
        exit(0);
    }
}

int main()
{
    printf("Poupanca Multi-Data!\n");

    int A, i = 1, R, nDias, total = 0;

    printf("Entre com o número de Dias:\n");
    scanf("%d\n", &nDias);

    scanf("%d %d\n\n", &A, &R);
    verifica(A, R);

    int Dias[nDias + 1];
    Dias[0] = 0;
    int Valor[nDias + 1];
    Valor[0] = 0;
    int Var[nDias];

    for (i = 1; i <= nDias; i++)
    {
        scanf("%d %d", &Dias[i], &Valor[i]);
        verifica(Dias[i], Valor[i]);
        verifica2(Dias[i - 1], Dias[i]);
    }

    for (i = 1; i <= nDias; i++)
    {
        total += Valor[i];
    }

    if (total < R)
    {
        printf("INSUFICIENTE");
        exit(0);
    }

    printf("\n");
    /*int resto = 0;*/
    int restanteR = 0, n, restanteVal;

    if (Dias[1] == A)
    {
        if (Valor[1] <= R)
        {
            restanteR = R - Valor[1];
            printf("\n%d %d    (Resgate =  %d)", Dias[1], 0, Valor[1]);
            if (Valor[nDias] <= R)
                        {
                            restanteR = R - Valor[nDias];
                            printf("\n%d %d    (Resgate =  %d)", Dias[nDias], 0, Valor[nDias]);
                            for (n = 1; n < nDias; n++)
                            {
                                if (Valor[n] <= restanteR)
                                {
                                    restanteR = R - Valor[n];
                                    if (Valor[n] > 0)
                                    {
                                        printf("\n%d %d    (Resgate =  %d)", Dias[n], 0, Valor[n]);
                                    }
                                }
                                else
                                {
                                    restanteVal = Valor[n] - restanteR;
                                    if (restanteR > 0)
                                    {
                                        printf("\n%d %d    (Resgate =  %d)", Dias[n], restanteVal, restanteR);
                                    }
                                }
                                if (restanteR = 0)
                                {
                                    break;
                                }
                            }
                        }
                        else
                        {
                            restanteVal = Valor[nDias] - R;
                            printf("\n%d %d    (Resgate =  %d)", Dias[nDias], restanteVal, R);
                        }
        }
        else
        {
            restanteVal = Valor[1] - R;
            printf("\n%d %d    (Resgate =  %d)", Dias[1], restanteVal, R);
        }
    }
    else if (Dias[1] < A)
    {
        if (Valor[1] <= R)
        {
            restanteR = R - Valor[1];
            printf("\n%d %d    (Resgate =  %d)", Dias[1], 0, Valor[1]);
            if (nDias > 1)
            {
                for (n = 1; n < nDias; n++)
                {
                    if (Dias[n] < A)
                    {
                        if (Valor[n] <= restanteR)
                        {
                            restanteR = R - Valor[n];
                            if (Valor[n] > 0)
                            {
                                printf("\n%d %d    (Resgate =  %d)", Dias[n], 0, Valor[n]);
                            }
                        }
                        else
                        {
                            restanteVal = Valor[n] - restanteR;
                            if (restanteR > 0)
                            {
                                printf("\n%d %d    (Resgate =  %d)", Dias[n], restanteVal, restanteR);
                            }
                        }
                    }
                    else
                    {
                        if (Valor[nDias] <= R)
                        {
                            restanteR = R - Valor[nDias];
                            printf("\n%d %d    (Resgate =  %d)", Dias[nDias], 0, Valor[nDias]);
                            for (n = 1; n < nDias; n++)
                            {
                                if (Valor[n] <= restanteR)
                                {
                                    restanteR = R - Valor[n];
                                    if (Valor[n] > 0)
                                    {
                                        printf("\n%d %d    (Resgate =  %d)", Dias[n], 0, Valor[n]);
                                    }
                                }
                                else
                                {
                                    restanteVal = Valor[n] - restanteR;
                                    if (restanteR > 0)
                                    {
                                        printf("\n%d %d    (Resgate =  %d)", Dias[n], restanteVal, restanteR);
                                    }
                                }
                                if (restanteR = 0)
                                {
                                    break;
                                }
                            }
                        }
                        else
                        {
                            restanteVal = Valor[nDias] - R;
                            printf("\n%d %d    (Resgate =  %d)", Dias[nDias], restanteVal, R);
                        }
                    }
                }
            }
        }
        else
        {
            restanteVal = Valor[1] - R;
            printf("\n%d %d    (Resgate =  %d)", Dias[1], restanteVal, R);
        }
    }

    else
    {
        if (Valor[nDias] <= R)
        {
            restanteR = R - Valor[nDias];
            printf("\n%d %d    (Resgate =  %d)", Dias[nDias], 0, Valor[nDias]);
            for (n = 1; n < nDias; n++)
            {
                if (Valor[n] <= restanteR)
                {
                    restanteR = R - Valor[n];
                    if (Valor[n] > 0)
                    {
                        printf("\n%d %d    (Resgate =  %d)", Dias[n], 0, Valor[n]);
                    }
                }
                else
                {
                    restanteVal = Valor[n] - restanteR;
                    if (restanteR > 0)
                    {
                        printf("\n%d %d    (Resgate =  %d)", Dias[n], restanteVal, restanteR);
                    }
                }
                if (restanteR = 0)
                {
                    break;
                }
            }
        }
        else
        {
            restanteVal = Valor[nDias] - R;
            printf("\n%d %d    (Resgate =  %d)", Dias[nDias], restanteVal, R);
        }
    }

    return 0;
}

