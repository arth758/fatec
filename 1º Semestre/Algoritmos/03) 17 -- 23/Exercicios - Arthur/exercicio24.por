programa
{
	
	funcao inicio()
	{
		inteiro altura, contador = 1, menor_alt = 0, maior_alt = 0 //Altura
		inteiro cont_f = 0, total_alt_f = 0, media_alt_f = 0 // Mulheres
		inteiro cont_m = 0, porcent_m = 100 // Homens
		inteiro sexo
		
		para(contador; contador <= 50; contador++){
			escreva("Entre com sua altura: (em centímetros)\n")
			leia(altura)
			escreva("Selecione seu sexo: \nPara MASCULINO selecione 1 \ne para FEMININO selecione 0)\n")
			leia(sexo)
			
			se(menor_alt == 0){
				menor_alt = altura
			}
			se(altura <= menor_alt){
				menor_alt = altura
			}

			se(maior_alt == 0){
				maior_alt = altura
			}
			se(altura >= maior_alt){
				maior_alt = altura
			}

			se(sexo == 0){
				cont_f++
				total_alt_f = total_alt_f + altura
				media_alt_f = total_alt_f / cont_f
				porcent_m -= 2
			}
			se(sexo == 1){
				cont_m++
			}
		}
		escreva("Maior altura do grupo: ", maior_alt, " centímetros\n")
		escreva("Menor altura do grupo: ", menor_alt, " centímetros\n")
		escreva("Média de altura das mulheres: ", media_alt_f, " centímetros\n")
		escreva("Número de homens no grupo: ", cont_m, "\n")
		escreva("Porcentagem de homens no grupo: ", porcent_m, "%\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 810; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {menor_alt, 6, 32, 9}-{maior_alt, 6, 47, 9}-{cont_f, 7, 10, 6}-{cont_m, 8, 10, 6};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */