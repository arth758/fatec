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