#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int distDoisPontos3Dim(int xa, int ya, int za, int xb, int yb, int zb)
{
    return sqrt(pow((xb-xa),2)+pow((yb-ya),2)+pow((zb-za),2));
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Exploração planetária\n\n");

    int xp, yp, zp;
    int x[5], y[5], z[5];
    int distancias[2][5];

    printf("Coordenadas do planeta(x, y, z): ");
    scanf("%d %d %d", &xp, &yp, &zp);

    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Coordenadas da Nave %d(x, y, z): ", i + 1);
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
        fflush(stdin);
    }
    for(i = 0; i < 5; i++)
    {
        distancias[1][i] = distDoisPontos3Dim(x[i], y[i], z[i], xp, yp, zp);
        distancias[0][i] = i;
    }

    int j, aux;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(distancias[1][i] < distancias[1][j])
            {
                aux = distancias[1][i];
                distancias[1][i] = distancias[1][j];
                distancias[1][j] = aux;
                aux = distancias[0][i];
                distancias[0][i] = distancias[0][j];
                distancias[0][j] = aux;
            }
        }
    }

    printf("Ordem das naves: ");
    for(i = 0; i < 5; i++)
        printf("%d, ", distancias[0][i]);

    return 0;
}


/*//sqrt(pow((xb-xa),2)+pow((yb-ya),2));                  // A) formula distância entre dois pontos com duas dimensões
//sqrt(pow((xb-xa),2)+pow((yb-ya),2)+pow((zb-za),2));   // B)formula distância entre dois pontos com tres dimensões
//sqrt(pow((xb-xa),2));*/
