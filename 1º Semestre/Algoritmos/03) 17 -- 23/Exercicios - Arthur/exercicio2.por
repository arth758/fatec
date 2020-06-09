programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		real raio, area, pi = 3.1415926535898
		escreva("Área do Círculo\n\n")
		escreva("Entre com o Raio do círculo: \n")
		leia(raio)
		area = pi * (raio * raio)
		escreva("A área do cículo é: \n\t", mat.arredondar(area, 2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 292; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */