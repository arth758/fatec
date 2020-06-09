#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    struct coordpolar
    {
        float grau;
        float raio;
        float angulo;
    };

    struct coordpolar coordp;

    struct coordcartesiana
    {
        float x;
        float y;
    };
    struct coordcartesiana coordc;

    float rad;

    printf("Informe o grau:\n");
    scanf("%f", &coordp.grau);

    printf("Informe o raio:\n");
    scanf("%f", &coordp.raio);

    rad= coordp.grau*3.141592/180;
    printf("O grau em radianos é: %.2f\n", rad);

    printf("A coordenada polar é: (%1.f/%.1f)\n", coordp.raio, rad);
    coordc.x = coordp.raio * cos(rad);
    coordc.y = coordp.raio * sin(rad);
    printf("A coordenada cartesiana é: (%1.f/%.2f)\n", coordc.x, coordc.y);

}
