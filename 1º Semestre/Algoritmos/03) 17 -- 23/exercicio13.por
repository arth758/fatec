programa
{
	
	funcao inicio()
	{
		escreva("Mínimo Múltiplo Comum\n\n")
		
		inteiro n1, n2, cont, aux = 0, mmc = 0
		
		escreva("Entre com o 1º Número:\n")
		leia(n1)
		escreva("Entre com o 2º Número:\n")
		leia(n2)
		
		para (cont = 1; cont <= n1; cont++)
		{
			se (n1%cont == 0) 
			{
				se (n2%cont == 0)
				{
					aux = cont
					mmc = (n1 * n2) / aux
				}
			}
		}
		escreva("O mínimo múltiplo comum é: ", mmc)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 32; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */