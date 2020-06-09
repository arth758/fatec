#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel {
    int conteudo;
    struct cel *seg;
};

typedef struct cel celula;
/*
void exibe(celula *list) {
    if (list != NULL) {
        printf("%d\n", list->conteudo);
        exibe(list->seg);
    }
}
*/

void exibe(celula *list){
    celula *p;
    for (p = list; p != NULL; p = p->seg) {
        printf("%d\n", p->conteudo);
    }
}

void insere(int x, celula *p){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->seg = p->seg;
    p->seg = nova;
}

int main()
{
    celula lista;
    celula *pont;

    insere(1, &lista);
    insere(1, &lista);
    insere(1, &lista);
    insere(1, &lista);

    exibe(&lista);

    return 0;
}
