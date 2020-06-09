#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Mercadoria!\n");

    char mercadoria[1][41];
    double valMercadoria, valDesconto, valPgtoVista;

    printf("\nEntre com o nome da mercadoria: ");
    gets(mercadoria[0]);
    printf("\nEntre com o valor da mercadoria: ");
    scanf("%d", &valMercadoria);

    valDesconto = valMercadoria * 0.1;
    valPgtoVista = valMercadoria - valDesconto;

    printf("\nNome da Mercadoria: %s", mercadoria[0]);
    printf("\nValor Total: %d", valMercadoria);
    printf("\nValor do Desconto: %d", valDesconto);
    printf("\nValor a ser Pago a Vista: %d", valPgtoVista);

    return 0;
}
