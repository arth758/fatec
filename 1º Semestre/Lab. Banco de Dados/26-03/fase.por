programa
{
	
	funcao inicio()
	{
		escreva("Classificação\n\n")
		
		inteiro n_part, n_vagas, c = 0, pontuacao, maior_pont = 0
		
		escreva("Entre com o número de participantes: ")
		leia(n_part)

		escreva("Entre com o mínimo de vagas para classificação: ")
		leia(n_vagas)

		inteiro pont[1000]

		escreva("Entre com a pontuação dos participantes: \n")
		enquanto(c < n_part) {
			leia(pontuacao)
			se(pontuacao > maior_pont){
				maior_pont = pontuacao	
			}
			para(c = 0; c < n_part; c++){
				se(pontuacao < maior_pont - c){
					
				}
				c++
			}
			pont[c] = pontuacao
			c++
		}
		c = 0
		enquanto(c < n_part) {
			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 554; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {c, 8, 27, 1}-{pontuacao, 8, 34, 9}-{pont, 16, 10, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */