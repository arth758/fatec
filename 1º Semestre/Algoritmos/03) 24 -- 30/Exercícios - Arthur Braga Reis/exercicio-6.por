programa
{
	
	funcao inicio()
	{
		escreva("Interseção\n\n")

		const inteiro tamanho = 20
		real v1[tamanho], v2[tamanho], v3[tamanho]
		inteiro cont = 0

		escreva("Entre com ", tamanho, " valores para o vetor 1:\n")
		para(inteiro c = 0; c < tamanho; c++){
			//escreva("Vetor 1:\n")
			escreva("Posição ", c + 1, ": ")
			leia(v1[c])
		}
		escreva("\nEntre com ", tamanho, " valores para o vetor 2:\n")
		para(inteiro c = 0; c < tamanho; c++){
			//escreva("Vetor 2:\n")
			escreva("Posição ", c + 1, ": ")
			leia(v2[c])
		}
		para(inteiro c = 0; c < tamanho; c++){
			para(inteiro d = 0; d < tamanho; d++){
				se(v1[c] == v2[d]){
					v3[cont] = v1[c]
					cont++
				}
			}
		}
		escreva("\nElementos da INTERSEÇÃO:\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva(v3[c], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 90; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */