#include <stdio.h>
#include <stdlib.h>

int main()
{
   float n1, n2, soma;
	float media;

	printf("informe duas notas\n");
	scanf("%f %f", &n1, &n2);

	if(n1>=0.0 && n1<=10.0){
		if(n2>=0.0 && n2<=10.0){

			soma=n1+n2;
			printf("A soma das Notas e %.1f\n", soma);

			media=soma/2;
			printf("A media e %.1f\n", media);

		}
	}
	else{
		printf("Nota inválida");



	}

	return 0;
}
