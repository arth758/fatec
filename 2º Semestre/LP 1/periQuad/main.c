#include <stdio.h>
#include <stdlib.h>

int peri_quad(int lado) {
    return 4 * lado;
}
void area_quad(int lado){
    printf("\narea: %d", (lado * lado));
}
void peri_retang() {
    int l, c;
    printf("\nDigite largura e comprimento: \n");
    scanf("%d %d", &l, &c);
    printf("\nperimetro do retangulo: %d\n", (l * 2) + (c * 2));

}
int area_retang(){
    int l, c;
    printf("\nDigite largura e comprimento: \n");
    scanf("%d %d", &l, &c);
    return l * c;

}

int main()
{
    char op;
    printf("Digite a opção\n");
    op = getche();
    switch(op) {
        case 'a': printf("\n%d", peri_quad(5));
            break;
        case 'b': area_quad(5);
            break;
        case 'c': peri_retang();
            break;
        case 'd': printf("\narea: %d", area_retang());
            break;
        default: printf("\nOpção inválida\n");
            break;
    }
    return 0;
}
