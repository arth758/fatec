programa
{
	
	funcao inicio()
	{
		escreva("Número Primo\n\n")
		
		inteiro numero, cont=0
		
		escreva("Entre com um número inteiro e positivo:\n")
		leia(numero)

		para(inteiro i = 1; i <= numero; i++){
			se(numero % i == 0){
				cont++
			}
		}
		
		se(cont == 2){
			escreva("O número ", numero, " é primo!")
		}
		senao{
			escreva("O número ", numero, " NÃO é primo!")

		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 190; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */