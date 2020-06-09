programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, c = 1, mdc = 0
		escreva("Entre com o primeiro numero:\n")
		leia(n1)
		escreva("Entre com o segundo numero:\n")
		leia(n2)
		enquanto(c <= n1)
		{
			se (n1 % c == 0) 
			{
				se (n2 % c == 0)
				{
					mdc = c
				}
			}
			c++
		}
		escreva("O maximo divisor comum é: ")
		escreva(mdc)
	}
}