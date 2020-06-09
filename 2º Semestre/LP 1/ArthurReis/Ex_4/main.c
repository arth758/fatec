#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//-------------------FUN��ES-----------------------------
float crescimento(int idadeIni, int idade,int anos,float altura)
{
    int x;
    if(idade < 21)
    {
      for (int i = 0; i < (idade - idadeIni); i++)
        {
          altura += 0.5;
        }
        return (altura);
    }
    else
    {
        x = idade - 21;
        for (int i = 0; i < ((idade - x) - idadeIni); i++)
        {
          altura += 0.5;
        }
        return (altura);
    }


}

float envelhecer(int idade)
{
    int anos;
    printf("\nQuantos anos voc� quer envelhecer?\n");
    scanf("%d",&anos);
    idade = idade + anos;
    return(idade);
}

float engordar(float peso)
{
  float kilos;
  printf("\nQuantos quilos voc� quer engordar?\n");
  scanf("%f",&kilos);
  peso = peso+kilos;
  return(peso);
}

float crescer(float altura)
{
  float cm;
  printf("\nQuantos cent�metros voc� quer crescer?\n");
  scanf("%f",&cm);
  altura = altura+cm;
  return(altura);
}

float emagrecer(float peso)
{
  float kilos;
  printf("\nQuantos quilos voc� quer emagrecer?\n");
  scanf("%f",&kilos);
  peso = peso-kilos;
  return(peso);
}

float calcularimc(float peso, float altura)
{
    altura = altura/100;
    return(peso/(altura*altura));
}
//-------------------MAIN-----------------------------
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    int idade, anos, idadeIni;
    float peso, altura, imc;
    int menuop = 0;

    printf("---CADASTRO PESSOAL---\n\nDigite seu nome:\n");
    scanf("%s",&nome);
    printf("Digite sua idade:\n");
    scanf("%i",&idade);
    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    printf("Digite seu altura(cm):\n");
    scanf("%f",&altura);

    while (menuop != 7)
    {
        printf("\n\n\n---MENU DE OP��ES---\n1- Meus Dados\n2- Envelhecer\n3- Engordar\n4- Emagrecer\n5- Crescer\n6- IMC\n7- Sair\n");
        printf("--------------------\n");
        scanf("%i",&menuop);

        switch(menuop)
        {
        case 1:
            printf("\n*********---*********");
            printf("\nNome: %s",nome);
            printf("\nIdade: %i",idade);
            printf("\nPeso: %.1f",peso);
            printf("\nAltura: %.f\n",altura);
            printf("\n*********---*********\n");
            break;
        //------------
        case 2:
            idadeIni = idade;
            idade = envelhecer(idade);
            printf("\nVoc� tem %i anos agora!",idade);
            printf("\nVoc� tem %.f cm de altura agora!",crescimento(idadeIni,idade, anos, altura));

            break;
        //------------
        case 3:
            peso = engordar(peso);
            printf("\nVoc� tem %.1f kilos agora!\n",peso);
            break;
        //------------
        case 4:
            peso = emagrecer(peso);
            printf("\nVoc� tem %.1f kilos agora!\n",peso);
            break;
        //------------
        case 5:
            if (idade <= 21)
            {
                altura = crescer(altura);
                printf("\nVoc� tem %.f cent�metros de altura agora!\n",altura);
            }
            else
            {
                printf("\nVoc� j� ultrapassou os 21 anos e n�o pode mais crescer!");
            }

            break;
        //------------
        case 6:
            printf("\nSeu IMC �: %.1f\n",calcularimc(peso,altura));
            break;
        //------------
        case 7:
            printf("Fim do Processo!\n");
            exit(0);
            break;
        //------------
        default:
            printf("Op��o inv�lida\n");
            break;
        }
    }
}
