programa
{
	
	funcao inicio()
	{
		escreva("Ordem Crescente\n\n")

		const inteiro tamanho = 51
		inteiro vetor_1[tamanho], valor, cont = 0, maior_seq = 0

		escreva("Entre com ",  tamanho - 1, " valores:\n")
		para(inteiro c = 1; c < tamanho; c++){
			escreva(c, ": ")
			leia(valor)
			vetor_1[c] = valor
			se(valor - 1 == vetor_1[c - 1]){
				cont++
				se(cont > maior_seq){
					maior_seq = cont
				}
			}
			senao{
				cont = 0
			}
		}
		//para(inteiro c = 0; c < tamanho; c++){
		escreva("A maior sequancia de números inteiros consecutivos é: ", maior_seq)
		//}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 94; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {maior_seq, 9, 45, 9}-{valor, 9, 28, 5}-{cont, 9, 35, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */