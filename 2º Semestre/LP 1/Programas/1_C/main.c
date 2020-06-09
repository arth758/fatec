#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Distancia Entre Cidades!\n");

    float total = 0;
    int i = 0;

    for(i; i < 5; i++)
    {
        float D;
        printf("Diastancia %d: ", i + 1);
        scanf("%f", &D);
        total = total + D;
    }

    printf("Diastancia Total: %.2f Km", total);
    return 0;
}
