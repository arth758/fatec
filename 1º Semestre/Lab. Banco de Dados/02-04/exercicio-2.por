programa
{
	
	funcao inicio()
	{
		cadeia nome, senha

		escreva("Entre com seu nome:\n")
		leia(nome)
		escreva("Entre com sue senha:\n")
		leia(senha)
		enquanto(nome == senha){
			escreva("\nERRO, Entre com uma senha diferete de seu nome de usuário!\n\n")
			escreva("Entre com seu nome:\n")
			leia(nome)
			escreva("Entre com sue senha:\n")
			leia(senha)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 369; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */