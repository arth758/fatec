programa
{
	
	funcao inicio()
	{
		escreva("Dívida de Grãos\n\n")
		
		real graos = 1.0
		inteiro contador = 0
		
		enquanto(contador < 63)
		{
			graos = graos * 2
			contador++
		}
		escreva("A rainha deve ", graos, " grãos ao monge!\n")
	}
}