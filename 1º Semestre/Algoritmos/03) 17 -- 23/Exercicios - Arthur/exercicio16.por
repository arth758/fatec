programa
{
	
	funcao inicio()
	{
		inteiro base, expoente, cont = 1, calculo = 1
		
		escreva("Entre com a Base:\n")
		leia(base)
		escreva("Entre com o Expoente:\n")
		leia(expoente)

		se(expoente == 0)
		{
			escreva("Entre com um expoente válido!")
		}
		senao
		{
			enquanto(cont <= expoente){
				calculo = calculo * base
				cont++
			}
		}
		escreva("A resposta é: ", calculo)
	}
}