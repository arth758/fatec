#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    int maior, menor, media=0;

      printf("Digite um numero...: ");
      scanf("%d",&num[0]);
      maior=num[0];
      menor=num[0];
      media=num[0];

      for(int i=0;i<=3;i++)
      {
           printf("Digite um numero...: ");
           scanf("%d",&num[i]);
           media=media+num[i];

           if(num[i]<menor)
           {
                menor=num[i];
           }
           if(num[i]>maior)
           {
                maior=num[i];
           }

      }
      int aux;
      int tamanho = 5;
      for(int i=0;i<tamanho-1;i++){
        for(int j=i+1;j<tamanho;j++){


            if(num[i] > num[j]){

                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    float mediana;
    if(tamanho%2){
         mediana = num[tamanho/2];
    } else {
         mediana = (num[tamanho/2-1]+num[tamanho/2])/2;
    }
    int conta=0;
    int moda;
    int cont[tamanho];
    for(int i=0;i<tamanho;i++){
        for(int j=i+1;j<tamanho;j++){

			if(num[i]==num[j]){
				cont[i]++;
					if(cont[i]>conta){
						conta=cont[i];
						moda=num[i];
					}
			}

        }
            }
      printf("O maior numero e...: %d",maior);
      printf("\nO menor numero e...: %d",menor);
      printf("\nA media e...: %d",media/5);
      printf("\nA mediana e...: %2.f", mediana);
      printf("\nA Moda e...: %d ", moda);

      getche();
}
