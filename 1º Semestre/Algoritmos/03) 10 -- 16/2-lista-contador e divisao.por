programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		inteiro n = 0
		real s = 0.0, cont = 1.0
		escreva("Entre com um valor para N: \n")
		leia(n)
		enquanto(cont <= n){
			s = s + (1 / cont)
			escreva("Valor ATUAL: ", mat.arredondar(s, 3), "\n")
			cont++
		}
		escreva("\nValor FINAL: ", mat.arredondar(s, 3))
	}
}