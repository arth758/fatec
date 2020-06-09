programa
{
	
	funcao inicio()
	{
		escreva("Série de Fibonacci\n\n")
		
		inteiro numeroAtual, numeroAnterior, numeroNovo, contador = 0
		
		escreva("Entre com o primeiro número:\n")
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