programa
{
	
	funcao inicio()
	{
		escreva("Produtos\n\n")

		const inteiro tamanho = 50
		cadeia nome[tamanho]
		real custo[tamanho], preco[tamanho]

		escreva("Entre com o NOME, CUSTO e PREÇO dos produtos, respectivamente:\n")

		para(inteiro c = 0; c < tamanho; c++){
			escreva("\n", c + 1, ":\n")
			escreva("Nome: ")
			leia(nome[c])
			escreva("Custo: ")
			leia(custo[c])
			escreva("Preço: ")
			leia(preco[c])
		}
		para(inteiro c = 0; c < tamanho; c++){
			se(preco[c] < custo[c] + (custo[c] * 0.1)){
				escreva("O produto ", nome[c], " possui MENOS de 10% de lucro!\n")
			}
			senao se(preco[c] >= custo[c] + (custo[c] * 0.1) e preco[c] <= custo[c] + (custo[c] * 0.3)){
				escreva("O produto ", nome[c], " possui ENTRE 10% e 30% de lucro!\n")
			}
			senao se(preco[c] > custo[c] + (custo[c] * 0.3)){
				escreva("O produto ", nome[c], " possui MAIS de 30% de lucro!\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 93; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */