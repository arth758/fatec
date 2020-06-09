programa
{
	
	funcao inicio()
	{
		escreva("Algoritmo de Euclides\n\n")
		inteiro divisor, dividendo, resto = 0, div1, div2
		
		escreva("Entre com o primeiro número:\n")
		leia(divisor)
		div1 = divisor
		escreva("Entre com o segundo número:\n")
		leia(dividendo)
		div2 = dividendo

		enquanto(divisor % dividendo != 0){
			resto = divisor % dividendo
			divisor = dividendo
			dividendo = resto
		}
		escreva("\nO Menor Divisor Comum de ", div1, " e ", div2, " é ", resto, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 479; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */