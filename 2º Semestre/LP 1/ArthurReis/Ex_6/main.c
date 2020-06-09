#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int funcao;
    printf("Seja muito bem vindo ao algoritimo numero 6 \n\n");
    printf("Neste exercicio 6 voce pode escolher entre os seguintes algoritimos. \n\n");
    printf("Digite 1 Para ContaN \nDigite 2 para Par ou Impar \nDigite 3 para Multiplo3 \nDigite 4 para Plano de ferias\n");
    scanf("%d",&funcao);
    if(funcao == 1)
    {
        ContaN();
    }
    else if (funcao == 2)
    {
        ParImpar();
    }
    else if (funcao == 3)
    {
        Multiplo3();
    }
    else if (funcao == 4)
    {
        RoteiroViagem();
    }
    else
    {
        printf("Valor digitado não corresponde a nenhuma função ou invalido\n\n");
    }
}
void ContaN()
{

    int n;
    char confirmacao;
    printf("Você escolheu o conta N \n\n");
    printf("Entre com o valor de N \n\n");
    scanf("%d",&n);
    while(n < 10)
    {
        n = n * 6;
    }
    printf("O valor de N: %d \n\n",n);
    printf("Deseja voltar ao menu de funcões? S/N \n");
    confirmacao = getch();
    if(confirmacao == 'S' || confirmacao == 's')
    {
        main();
    }
    else
    {
        printf("Ja vai?? Volte sempre, temos as melhores mensagens de interacao que a senhora corrigira");
    }
}
void ParImpar()
{
    int x;
    char confirmacao;
    x = 0;
    printf("Bem vindo ao algoritimo de par ou impar\n");
    printf("Entre com um valor para essa sua duvida existencia : \n");
    scanf("%d",&x);
    if((x % 2) == 0)
    {
        printf("/n Temos a resposta para sua duvida este numero e PAR\n");
    }
    else if ((x % 2) != 0)
    {
        printf("/n Temos a resposta para sua duvida este numero é IMPAR");
    }
    else
    {
        printf("/n Valor digitado nulo ou invalido");
    }
    printf("\nDeseja voltar ao menu de funcões? S/N \n");
    confirmacao = getch();
    if(confirmacao == 'S' || confirmacao == 's')
    {
        main();
    }
    else
    {
        printf("Ja vai?? Volte sempre, temos as melhores mensagens de interacao que a senhora corrigira");
    }
}
void Multiplo3()
{
    int x;
    char confirmacao;
    printf("\n Beleza em ja chegou no 3 exercicio tomar que os outros tenham sido melhores \n");
    printf("Entre com o valor que deseja saber se é multiplo de 3\n");
    scanf("%d",&x);
    if((x % 3) == 0)
    {
        printf("Acertou este numero é multiplo de 3");
    }
    else if ((x % 3)!= 0)
    {
        printf("Poxa nao foi dessa vez numero digitado NAO E MULTIPLO DE 3");
    }
    else
    {
        printf("Valor digitado invalido ou nao digitado");
    }
    printf("\nDeseja voltar ao menu de funcões? S/N \n");
    confirmacao = getch();
    if(confirmacao == 'S' || confirmacao == 's')
    {
        main();
    }
    else
    {
        printf("Ja vai?? Volte sempre, temos as melhores mensagens de interacao que a senhora corrigira");
    }
}
void RoteiroViagem()
{
    char confirmacao,sera,destino[7],local[10],oucupacao[15],plano[15];
    printf("Bom o que dizer esse é mais chato\n");
    printf("\nJá sabe para onde ir? S/N \n");
    sera = getch();
    if(sera == 'N' || sera ==  'n')
    {
        printf("\nEscolha um destino para onde deseja ir \nNamibia, \nCongo, \nArabia Saudita, \nCape town \n");
        scanf("%s",&destino);
    }
    else
    {
        printf("\nSabidão então? Pra onde voce vai?");
        scanf("%s",&destino);
    }
    printf("\nDefina aonde quer ficar \nHostel \nHotel \nAlbergue \nCasa de locais \n");
    scanf("%s",local);
    printf("\nO que quer fazer \nParque \nzoologico \nteatro \nLago \n");
    scanf("%s",oucupacao);
    printf("\nnós temos 2 pacotes para voce\nStandart R$ 1200,00 \nPremium R$ 5000,00\n");
    scanf("%s",plano);
    printf("\nFicou assim \n voce vai para %s e vai ficar no %s vai visitar o %s pelo nosso plano %s",destino,local,oucupacao,plano);
    printf("\nDeseja voltar ao menu de funcões? S/N \n");
    confirmacao = getch();
    if(confirmacao == 'S' || confirmacao == 's')
    {
        main();
    }
    else
    {
        printf("Ja vai?? Volte sempre, temos as melhores mensagens de interacao que a senhora corrigira");
    }
}
