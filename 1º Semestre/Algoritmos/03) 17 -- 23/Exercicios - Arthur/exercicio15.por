programa
{
	funcao inicio()
	{
		inteiro dividendo, divisor, acum = 0, contador = 0
		escreva("Entre com o Dividendo:\n")
		leia(dividendo)
		escreva("Entre com o Divisor:\n")
		leia(divisor)
		enquanto(acum < dividendo)
		{
			acum = acum + divisor
			contador++
		}
		escreva("O quociente é: ", contador)
	}
}