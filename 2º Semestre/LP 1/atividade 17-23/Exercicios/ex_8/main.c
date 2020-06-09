#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define n 10


int main()

{
setlocale(LC_ALL,"portuguese");
int i,ac1=0,ac2=0,ac3=0;
char vetorr[n],vetorg[n];
float media1,media2,media3;

for(i=0;i<n;i++){
printf("Informe a resposta correta da questão:%d\n",i+1);
fflush(stdin);
scanf("%c",&vetorg[i]);

}
for(i=0;i<n;i++){
printf("Gabarito questão : %d letra: %c\n",i+1,vetorg[i]);
fflush(stdin);
}

printf("\n");
printf("____________________________________________\n");
printf("\n");

for(i=0;i<n;i++){
printf("Informe a resposta da questão: %d do 1º aluno\n",i+1);
fflush(stdin);
scanf("%c",&vetorr[i]);

if(vetorr[i]==vetorg[i]){
ac1=ac1+1;}



}

media1=(ac1/10.0)*10.0;
if(ac1>=7)

  printf("O aluno acertou: %d questões e obteve: %2.2f e foi aprovado\n",ac1,media1);

   if(ac1<7)

   printf("O aluno acertou: %d questoes e obteve nota: %2.2f e foi reprovado\n",ac1,media1);




printf("\n");
printf("____________________________________________\n");
printf("\n");


for(i=0;i<n;i++){
printf("Informe a resposta da questão: %d do 2º aluno\n",i+1);
fflush(stdin);
scanf("%c",&vetorr[i]);

if(vetorr[i]==vetorg[i]){
ac2=ac2+1;}

media2=ac2/10.0*(10.0);

}



if(ac2>=7)

  printf("O aluno acertou: %d questões e obteve nota: %2.2f e foi aprovado\n",ac2,media2);

   if(ac2<7){

   printf("O aluno acertou: %d questões e obteve nota: %2.2f e foi reprovado\n",ac2,media2);}

printf("\n");
printf("____________________________________________\n");
printf("\n");

printf("\n \n");
for(i=0;i<n;i++){
printf("Informe a resposta da questão: %d do 3º aluno\n",i+1);
fflush(stdin);
scanf("%c",&vetorr[i]);

if(vetorr[i]==vetorg[i]){
ac3=ac3+1;}

media3=ac3/10.0*(10.0);

}



if(ac3>=7){

  printf("O aluno acertou: %d questões e obteve nota: %2.2f e foi aprovado\n",ac3,media3);}

   if(ac3<7){

   printf("O aluno acertou: %d questões e obteve nota: %2.2f e foi reprovado\n",ac3,media3);}

getch();
}
