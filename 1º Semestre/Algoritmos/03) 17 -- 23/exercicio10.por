programa
{
	
	funcao inicio()
	{
		escreva("Classe Eleitoral\n\n")
		
		inteiro idade
		
		escreva("Entre com a sua idade:\n")
		leia(idade)

		se (idade < 0){
			escreva("\nIdade inválida")
		}
		senao{
			se (idade < 16){
				escreva("\nNão votante")
			}
			senao{
				se (idade >= 18 e idade <= 65){
					escreva("\nEleitor Obrigatório")
				}
				senao{
					escreva("\nEleitor Facultativo")
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 375; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */