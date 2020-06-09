programa
{
	
	funcao inicio()
	{
		escreva("Números Primos\n\n")
		
		inteiro inicio, fim, fatorial, resposta
		logico decisao
		
		escreva("Entre com o número inicial do intervalo: \n")
		leia(inicio)
		escreva("Entre com o número final do intervalo: \n")
		leia(fim)

		para(inicio; inicio <= fim; inicio++){
			fatorial = 2
			decisao = falso
			enquanto(inicio != fatorial){
				resposta = inicio % fatorial
				fatorial++
				se(resposta == 0){
					decisao = verdadeiro
				}
			}
			se(nao decisao){
				escreva(inicio, " ")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 326; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */