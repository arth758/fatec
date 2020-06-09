programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real nota1, nota2, nota3, nota4, nota5, media
		escreva("Cálculo de média ponderada\n\n")
		escreva("Entre com a primeira nota:\n")
		leia(nota1)
		escreva("Entre com a segunda nota:\n")
		leia(nota2)
		escreva("Entre com a terceira nota:\n")
		leia(nota3)
		escreva("Entre com a quarta nota:\n")
		leia(nota4)
		escreva("Entre com a quinta nota:\n")
		leia(nota5)
		media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3) + (nota4 * 4) + (nota5 * 5)) / 15
		escreva("A média ponderada é: \n\t", mat.arredondar(media, 2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 373; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */