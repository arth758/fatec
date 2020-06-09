#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Consumo de Combustivel\n");

    float dist, preco, consumo, manutencao, pedagio;
    float val_kml, total;

    printf("Distancia: ");
    scanf("%f", &dist);
    printf("Valor combustivel(por L): ");
    scanf("%f", &preco);
    printf("Consumo(em km): ");
    scanf("%f", &consumo);
    printf("Valor de Manutencao: ");
    scanf("%f", &manutencao);
    printf("Valor do Pedagio: ");
    scanf("%f", &pedagio);

    val_kml = (dist / consumo) * preco;
    total = (val_kml + manutencao + pedagio) / dist;

    printf("\n\nValor medio por Km: %.2f", total);

    return 0;
}
