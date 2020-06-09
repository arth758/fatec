#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int primeiro;
    int segundo;
    printf("Primeiro n�mero: ");
    scanf("%i", &primeiro);
    printf("Segundo n�mero: ");
    scanf("%i", &segundo);

    if (primeiro > segundo)
    {
        printf("\n O maior n�mero digitado foi o ");
        printf("%i", primeiro);
        printf("\n");
    }
    else if (primeiro < segundo)
    {
        printf("\n O Maior n�mero digitado foi o ");
        printf("%i", segundo);
        printf("\n");
    }
    else if (primeiro == segundo)
    {
        printf("\nN�meros iguais");
        printf("\n");
    }
    return 0;
}
