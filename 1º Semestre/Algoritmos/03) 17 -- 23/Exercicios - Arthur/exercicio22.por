programa
{
	inclua biblioteca Util
	
	funcao inicio()
	{
		escreva("Possibilidades de Dados\n\n")
		
		inteiro dado1 = 1, dado2 = 6
		
		enquanto(dado1 <=6 e dado2 > 0){
			se(dado1 + dado2 == 7){
				escreva("A soma dos elementos ", dado1, " e ", dado2, " é igual a 7!\n")
			}
			dado1++
			dado2--
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 171; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {dado1, 9, 10, 5}-{dado2, 9, 21, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */