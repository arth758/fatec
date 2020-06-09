#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

/*Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu
naipe e seu valor) ou tipo “super trunfo” (cada carta possui um conjunto de atributos).
Implemente a parte de distribuic¸ ˜ao (sorteio) de cartas para 2 jogadores, considerando
que cada jogador ir ´a receber 5 cartas. Exiba na tela as cartas que cada um dos jogadores
recebeu.*/
typedef struct dados
{
   int defesa;
   int ataque;
   int velocidade;
   int vida;
   char classe[20];
}baralho;

baralho carta[10];
int main()
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        carta[i].ataque = rand() % 100;
        carta[i].defesa = rand() % 100;
        carta[i].velocidade = rand() % 100;
        carta[i].vida = rand() % 500;
        if(carta[i].vida == 0)
        {
            carta[i].vida = 2;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(carta[i].vida > 430)
        {
            strcpy(carta[i].classe,"Tanque");
        }
        else if(carta[i].ataque > carta[i].defesa && carta[i].ataque > carta[i].velocidade)
        {
            strcpy(carta[i].classe,"Mago");
        }
        else if(carta[i].defesa > carta[i].ataque && carta[i].defesa > carta[i].velocidade)
        {
            strcpy(carta[i].classe,"Guerreiro");
        }
        else if(carta[i].velocidade > carta[i].ataque && carta[i].velocidade > carta[i].defesa)
        {
            strcpy(carta[i].classe,"Assassino");
        }
    }

    printf("JOGADOR 1 \n\n");
    for(int i = 0; i < 5; i++)
    {

        printf("Classe: %s \n", carta[i].classe);
        printf("Ataque: %d \n",carta[i].ataque);
        printf("Defesa: %d \n",carta[i].defesa);
        printf("Velocidade: %d \n",carta[i].velocidade);
        printf("Vida: %d \n\n\n",carta[i].vida);
    }

    printf("JOGADOR 2 \n\n");
    for(int i = 5; i < 10; i++)
    {

        printf("Classe: %s \n", carta[i].classe);
        printf("Ataque: %d \n",carta[i].ataque);
        printf("Defesa: %d \n",carta[i].defesa);
        printf("Velocidade: %d \n",carta[i].velocidade);
        printf("Vida: %d \n\n\n",carta[i].vida);
    }
}
