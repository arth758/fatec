programa
{
	
	funcao inicio()
	{
		escreva("D�vida de Gr�os\n\n")
		
		real graos = 1.0
		inteiro contador = 0
		
		enquanto(contador < 63)
		{
			graos = graos * 2
			contador++
		}
		escreva("A rainha deve ", graos, " gr�os ao monge!\n")
	}
}