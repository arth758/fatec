#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float result;

    struct Vetor1
    {
        float x;
        float y;
        float z;
    };
    struct Vetor1 v1;

     struct Vetor2
    {
        float x;
        float y;
        float z;
    };
    struct Vetor2 v2;

    printf("Digite 3 valores consecutivos para o vetor 1\n");
    scanf("%f", &v1.x);
    scanf("%f", &v1.y);
    scanf("%f", &v1.z);

    printf("Digite 3 valores consecutivos para o vetor 2\n");
    scanf("%f", &v2.x);
    scanf("%f", &v2.y);
    scanf("%f", &v2.z);

    float resultV1 = v1.x * v1.y * v1.z;
    float resultV2 = v2.x * v2.y * v2.z;

    result = resultV1 + resultV2;

    printf("\nO resultado da soma dos vetores R³: %1.f", result);


}
