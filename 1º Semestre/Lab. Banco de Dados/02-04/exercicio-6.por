programa
{
	
	funcao inicio()
	{
		escreva("Números Triangulares\n\n")
		
		inteiro num, cont = 0, n1 = 0, n2 = 0, n3 = 0
		
		escreva("Entre com um número inteiro positivo:\n")
		leia(num)

		enquanto(num != cont * (cont + 1) * (cont + 2)){
			cont++
			se(num == cont * (cont + 1) * (cont + 2)){
				n1 = cont
				n2 = cont + 1
				n3 = cont + 2
			}
			se(cont > num){
				pare
			}
		}
		escreva("Os números consecutivos são ", n1,", ",  n2," e ", n3)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 386; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {cont, 8, 15, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */