programa
{
	inclua biblioteca Tipos --> tip
	
	funcao inicio()
	{
		escreva("Avaliação\n\n")
		
		
		const inteiro tamanho = 200
		real notas[tamanho]
		cadeia nomes[tamanho], mais_70[tamanho][2]
		logico decisao[tamanho]
		inteiro a = 1
		
		escreva("Entre com o NOME e NOTA de ", tamanho, " participantes\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva("Nome ", c + 1, ": ")
			leia(nomes[c])
			escreva("Nota ", c + 1, ": ")
			leia(notas[c])
			se(notas[c] >= 70){
				mais_70[c][0] = nomes[c]
				mais_70[c][1] = tip.real_para_cadeia(notas[c])
				decisao[c] = verdadeiro
			}
		}
		escreva("\nRanking dos participantes que tiraram MAIS de 70:\n")
		para(inteiro c = 0; c < tamanho; c++){
			se(decisao[c] == verdadeiro){
				escreva(a, "\tNome: ", mais_70[c][0], "\t\tNota: ", mais_70[c][1], "\n")
				a++
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 128; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */