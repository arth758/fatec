#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Verificação de triangulos\n");
    printf("Entre com os lados do Triangulo:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if(abs((b - c) < a && a < (b + c)) || abs((a - c) < b && b < (a + c)) || abs((a - b) < c && c < (a + b))){
        if(a == b && b == c){
            printf("ACUTANGULO");
        } else if(a == b && b != c) {
            printf("RETANGULO");
        } else if(a == c && c != b) {
            printf("RETANGULO");
        } else if(b == c && c != a) {
            printf("RETANGULO");
        } else if(a != b && b != c) {
            printf("OBTUSANGULO");
        } else {
            printf("INVALIDO");
        }
    } else {
        printf("INVALIDO");
    }

    return 0;
}
