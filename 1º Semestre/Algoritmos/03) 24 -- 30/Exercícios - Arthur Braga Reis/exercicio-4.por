programa
{
	
	funcao inicio()
	{
		escreva("Notas\n\n")
		
		const inteiro tamanho = 50
		inteiro cont_menor = 0, cont_maior = 0, cont_total = 0
		real media = 0.0, valor, acum_notas = 0.0, vetor[tamanho]

		escreva("Entre com ", tamanho, " valores:\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva(c + 1, ": ")
			leia(valor)
			vetor[c] = valor
			acum_notas = acum_notas + valor
			cont_total++
		}
		media = acum_notas / cont_total
		para(inteiro c = 0; c < tamanho; c++){
			se(vetor[c] >= media + (10 / 100)){
				cont_maior++
			}
			senao se(vetor[c] <= media - (10 / 100)){
				cont_menor++
			}
		}
		escreva("Notas MENORES que a média: ", cont_maior, "\n")
		escreva("Notas MENORES que a média: ", cont_menor, "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 86; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {media, 10, 7, 5}-{acum_notas, 10, 27, 10};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */