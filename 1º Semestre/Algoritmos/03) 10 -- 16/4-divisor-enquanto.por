programa
{
	
	funcao inicio()
	{
		real a = 1.0, b = 1.0, result = 0.0
		enquanto(a < 99 e b < 50){
			result = a / b 
			escreva(result, "\n")
			a = a + 2
			b = b + 1
		}
		escreva("Resultado Final: ", result)
	}
}