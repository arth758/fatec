#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, y, z, op;
    float result;
    printf("Entre com o valor de x: \n");
    scanf("%d",&x);

    printf("Entre com o valor de y  \n");
    scanf("%d",&y);

    printf("Entre com o valor de z: \n");
    scanf("%d",&z);

    printf("1- Geometria\n2- Ponderada\n3- Harmonica\n4- Aritmetica\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        result = cbrt(x*y*z);
        printf("%f",result);
        break;
    case 2:
        result = ((z + 2)*(y+3)*(z+4))/6;
        printf("%f",result);
        break;
    case 3:
        result = 3/((1/x)+(1/y)+(1/z));
        printf("%f",result);
        break;
    case 4:
        result = (x+y+z)/3;
        printf("%f",result);
        break;
    }
}
