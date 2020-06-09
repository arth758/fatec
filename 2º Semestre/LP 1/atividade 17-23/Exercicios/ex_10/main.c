/**** Jogo da Velha *****/

/*inclusão de bibliotecas*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*variávies globais, vistas em todo o programa*/
char matriz[3][3];/*tabuleiro do jogo*/
int i,j;  /*controle de linha e coluna do tabuleiro*/
int x, y; /* controle da jogada*/
int inicio; /* controle de jogo acontecendo*/
int empate;/*contador de campos ocupados no tabuleiro*/
int ganhou;/*indicador de vit�ria da pessoa*/
int perdeu;/*indicador de derrota da pessoa*/
int vitorias=0;/*contador com a quantidade de vitorias da pessoa */
int derrotas=0;/*contador com a quantidade de derrotas da pessoa */
int empates=0;/*contador com a quantidade de empates da pessoa */




/*preenche matriz com _ no início do jogo*/
void inicia_matriz()
{
     for (i=0; i<3; i++)
     {
         for (j=0; j<3; j++) matriz[i][j] = '_';
     }

}

/*desenha o jogo na tela*/
void mostra_tela()
{
     system("cls");
     puts(" * * * JOGO DA VELHA * * *");
     for (i=0; i<3; i++)
     {
         printf ("\n");
         for (j=0; j<3; j++)
         {
             printf ("%c", matriz[i][j]);

             if (j < 3) printf (" ");

         }
     }

}

/*solicita jogada da pessoa*/
void pessoa_jogar()
{
     int vld=0; /* controle de jogada válida*/
     while ((vld==0)&&(empate<9)&&(inicio==1))
     {
           printf ("\n\n");
           do {
           puts("Informe a linha (1,2,3): ");
           scanf("%d", &x);
           if ((x>3) || (x==0)){
            printf("Valor incorreto, deve ser entre 1,2 ou 3\n");
           }
           } while ((x>3) || (x==0));
           do {
           puts("Informe a coluna(1,2,3): ");
           scanf("%d", &y);
           if ((y>3) || (y==0)){
            printf("Valor incorreto, deve ser entre 1,2 ou 3\n");
           }
           } while ((y>3) || (y==0));
           x -= 1;  //x=x-1;
           y -= 1;  //y=y-1;
           if((x<3)&& (y<3) && (matriz[x][y] =='_')) vld=1;//jogada válida
           mostra_tela();
           if (vld != 1) {
            printf("\nLinha: %d\nColuna %d", x+1,y+1); // exibe a linha e coluna digitadas incorretamente
            printf("\nJogada invalida, jogue novamente"); // exibe uma mensagem de erro informando que a jogada é inválida
           }
      }

}
/*gerar um número aleatório para computador jogar, menor que 3*/
int gerar()
{
    return (rand()%3);

}


/*computador escolhe uma jogada aleatória*/
void computador_jogar()
{
     int a, b;
     /*procura uma posição válida para o computador jogar */
     do
     {
         a=gerar();
         b=gerar();
     } while((matriz[a][b] !='_')&&(empate<9)&&(inicio==1));
     x = a;
     y = b;
}

/*preenche jogada na matriz e atualiza a visualização na tela*/
void marca_campo(char q)
{
   if ((empate<9)&&(ganhou ==0)&&(perdeu ==0)){
     matriz[x][y] = q;
     empate++;
     mostra_tela();}

}


/*verifica possibilidade de vitoria ou derrota da pessoa*/
void verifica_vitoria(){
     char campos[3];
     for (i=0; i<3; i++)
     {  /*verifica se ocorreu fechamento de uma linha*/
         for (j=0; j<3; j++) campos[j] = matriz[i][j];
            if ((campos[0] == campos[1]) && (campos[1] ==campos[2]))
            {
               if (campos[0] == 'X') ganhou = 1;
               if (campos[0] == 'O') perdeu = 1;
            }
     }

     for (i=0; i<3; i++)
     {   /*verifica se ocorreu fechamento de uma coluna*/
         for (j=0; j<3; j++) campos[j] = matriz[j][i];
         if ((campos[0] == campos[1]) && (campos[1] ==campos[2]))
         {
            if (campos[0] == 'X') ganhou = 1;
            if (campos[0] == 'O')perdeu = 1;
         }
     }
     /*verifica se ocorreu fechamento na diagonal*/
     if ((matriz[0][0] == matriz[1][1]) && (matriz[2][2] == matriz[0][0]))
     {
          if (matriz[0][0] == 'X') ganhou = 1;
          if (matriz[0][0] == 'O') perdeu = 1;
     }
     /*verifica se ocorreu fechamento na outra diagonal*/
     if ((matriz[0][2] == matriz[1][1]) && (matriz[2][0] == matriz[1][1]))
     {
          if (matriz[1][1] == 'X')ganhou = 1;
          if (matriz[1][1] == 'O')perdeu = 1;
     }
            /*verfica se pessoa ganhou*/
      if (ganhou == 1)
      {
        mostra_tela();
        puts("\nVoce ganhou!");
        vitorias += 1;
        inicio=0;

      }
     /*verifica se pessoa perdeu*/
     if (perdeu == 1)
     {
        mostra_tela();
        puts(" \nVoce perdeu!");
        derrotas += 1;
        inicio=0;


     }
 /*verifica possibilidade de empate*/
      if ((empate ==9)&&(ganhou ==0)&&(perdeu ==0))
      {
        mostra_tela();
        puts("\nDEU VELHA!");
        empates += 1;
        inicio=0;
      }

}

int main()
{
      srand ((unsigned) time(NULL));
      char jogar='s';
      int quem;
      do
      {
        empate=0;
        ganhou = 0;
        perdeu = 0;
        inicio=1;
        inicia_matriz();
        mostra_tela();
        quem=rand()%2;/* sorteio de quem começa a jogar*/
        if(quem==0)
          while (inicio==1)
           {
                 pessoa_jogar();
                 marca_campo('X');//pessoa joga com X
                 verifica_vitoria();
                 computador_jogar();
                 marca_campo('O');//computador joga com 0
                 verifica_vitoria();
             }

        else
            while (inicio==1)
             {
                 computador_jogar();
                 marca_campo('O');
                 verifica_vitoria();
                 pessoa_jogar();
                 marca_campo('X');
                 verifica_vitoria();
              }
     do {
     printf("\nDeseja jogar novamente (s/n)?");
     jogar=tolower(getch()); /* convertendo valor de entrada para min�sculo */
     if ((jogar != 's') && (jogar != 'n')){ /* verificao de valores digitados e impressao de mensagem de erro caso o valor seja invalido */
        printf("\nOpcao invalida (%c)", jogar);
     }
     } while ((jogar != 's') && (jogar != 'n'));
     } while(jogar=='s');
     /* Exibe a quantidade total de vitorias, empates e derrotas do jogador */
     printf("\nTotal de vitorias: %d", vitorias);
     printf("\nTotal de derrotas: %d", derrotas);
     printf("\nTotal de empates: %d", empates);
     return 0;
  }

