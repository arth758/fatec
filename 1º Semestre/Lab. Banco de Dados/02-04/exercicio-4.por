programa
{
	
	funcao inicio()
	{
		escreva("Sequência de Fibonacci\n\n")
		
		inteiro f1 = 0, tam
		
		escreva("Entre com um número inteiro:\n")
		leia(f1)
		escreva("Entre com o número de elementos da sequência:\n")
		leia(tam)
		inteiro f2 = f1, f3 = f1 + f2
		escreva("\n", f1," ", f2," ", f3," ")
		para(inteiro n = 3; n < tam; n++){
			f1 = f2
			f2 = f3
			f3 = f1 + f2
			escreva(f3," ")
		}
	}
}	
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 327; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */