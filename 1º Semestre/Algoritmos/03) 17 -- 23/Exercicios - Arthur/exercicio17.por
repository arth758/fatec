programa
{
	
	funcao inicio()
	{
		escreva("S�rie de Fibonacci\n\n")
		
		inteiro numeroAtual, numeroAnterior, numeroNovo, contador = 0
		
		escreva("Entre com o primeiro n�mero:\n")
		leia(numeroAnterior)
		escreva("Entre com o segundo numero:\n")
		leia(numeroAtual)
		
		escreva(numeroAnterior, " ", numeroAtual, " ")

		enquanto(contador < 18)
		{
			numeroNovo = numeroAtual + numeroAnterior
			numeroAnterior = numeroAtual
			numeroAtual = numeroNovo
			escreva(numeroNovo, " ")
			contador++
		}
	}
}