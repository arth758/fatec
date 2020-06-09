programa
{
	
	funcao inicio()
	{
		escreva("Vetores\n\n")

		const inteiro tamanho = 30
		real vetor_1[tamanho], vetor_2[tamanho], valor

		escreva("Entre com ", tamanho, " valores:\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva(c + 1, ": ")
			leia(valor)
			vetor_1[c] = valor
			se(c % 2 == 0){
				vetor_2[c] = valor * 2
			}
			senao se(c % 2 != 0){
				vetor_2[c] = valor * 3
			}
		}

		escreva("Valores finais:\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva(c + 1, ": ", vetor_2[c], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 173; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */