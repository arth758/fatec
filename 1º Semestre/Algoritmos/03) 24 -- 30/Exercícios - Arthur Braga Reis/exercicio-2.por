programa
{
	
	funcao inicio()
	{
		escreva("Vetores 2\n\n")

		const inteiro tamanho = 30
		real vetor_1[tamanho], vetor_2[tamanho], valor
		inteiro c = 0, d = tamanho - 1

		escreva("Entre com 30 valores:\n")
		enquanto(c < tamanho e d >= 0){
			leia(valor)
			vetor_1[c] = valor
			vetor_2[d] = valor
			c++
			d--
		}

		escreva("\nNúmeros invertidos:\n")
		para(c = 0; c < tamanho; c++){
			escreva("Posição ", c, ":\t", vetor_2[c], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 447; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */