programa
{
	funcao inicio()
	{
		real prestacao, prestacao_acr, prestacao_desc, prejuizo
		
		escreva("Entre com o valor da prestação atrasada:\n")
		leia(prestacao)

		prestacao_acr = prestacao + (prestacao * 0.1)
		prestacao_desc = prestacao_acr - (prestacao_acr * 0.1)
		prejuizo = prestacao - prestacao_desc

		escreva("Valor da prestação original: ", prestacao, "\n")
		escreva("Valor da prestação com acréscimo e desconto: ", prestacao_desc, "\n")
		escreva("Prejuízo do vendedor: ", prejuizo)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 507; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */