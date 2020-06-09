programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		escreva("Calculaora\n\n")
		
		real H = 0.0, cont1 = 1.0, cont2 = 1.0

		enquanto(cont1 <= 99 e cont2 <= 50.0){
			  H = H + cont1 / cont2
			  se(cont1 == 99 e cont2 == 50){
			  	pare
			  }
			  senao{
			  	cont1 += 2
			  	cont2 ++
			  }
		}
		escreva("O resultado de H é: ", mat.arredondar(H, 3))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 379; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {H, 9, 7, 1}-{cont1, 9, 16, 5}-{cont2, 9, 29, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */