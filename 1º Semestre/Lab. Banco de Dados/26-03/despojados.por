programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		escreva("Números Despojados\n\n")

		inteiro entrada, cont = 0, primo = 2

		escreva("Entre com um número positivo:\nOpção: ")
		leia(entrada)

		enquanto((entrada > 1) ou (primo <= mat.raiz(entrada, 2))){
			se(entrada % primo == 0){
				cont++
				enquanto(entrada % primo == 0){
					entrada = entrada / primo
				}
				primo++
			}
			senao {
				pare
			}
		}

		se(entrada > 1){
			cont++
		}
		escreva(mat.potencia(2, cont) - cont - 1)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 422; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {entrada, 9, 10, 7}-{cont, 9, 19, 4}-{primo, 9, 29, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */