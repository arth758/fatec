programa
{
	
	funcao inicio()
	{
		escreva("Maior e Menor\n\n")
		
		inteiro numeroAtual, numeroMaior = 0, numeroMenor = 0
		
		escreva("Entre com um número positivo (-1 para sair):\n")
		leia(numeroAtual)
		
		numeroMaior = numeroAtual
		numeroMenor = numeroAtual
		
		enquanto(numeroAtual > -1)
		{
			se (numeroAtual > numeroMaior)
			{
				numeroMaior = numeroAtual
			}
			senao se(numeroAtual < numeroMenor)
			{
				numeroMenor = numeroAtual
			}
		escreva("Insira um número positivo ou -1 para sair:\n")
		leia(numeroAtual)
		}
		escreva("\nO maior número é: ", numeroMaior, "\n")
		escreva("O menor número é: ", numeroMenor)
	}
}