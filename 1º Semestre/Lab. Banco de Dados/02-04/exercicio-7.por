programa
{
	
	funcao inicio()
	{
		escreva("Troco\n\n")
		
		inteiro valor, valor_pago, troco
		inteiro cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0
		
		escreva("Entre com o valor da conta:\n")
		leia(valor)
		escreva("Entre com o valor pago:\n")
		leia(valor_pago)

		troco = valor_pago - valor

		enquanto(troco >= 0){
			se(troco >= 50){
				troco = troco - 50
				cont50++
			}
			se(troco >= 20){
				troco = troco - 20
				cont20++
			}
			se(troco >= 10){
				troco = troco - 10
				cont10++
			}
			se(troco >= 5){
				troco = troco - 5
				cont5++
			}
			se(troco >= 2){
				troco = troco - 2
				cont2++
			}
			se(troco >= 1){
				troco = troco - 1
				cont1++
			}
			se(troco <= 0){
				pare
			}
		}
		troco = (50 * cont50) + (20 * cont20) + (10 * cont10) + (5 * cont5) + (2 * cont2) + (1 * cont1)
		escreva("O troco deverá ser dado em : \n\t", cont50, " notas de 50\n\t", cont20, " notas de 20\n\t", cont10, " notas de 10\n\t", cont5, " notas de 5\n\t", cont1, " notas de 1\n\n\tNo valor de ", troco)
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1019; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {valor, 8, 10, 5}-{valor_pago, 8, 17, 10}-{troco, 8, 29, 5}-{cont50, 9, 10, 6}-{cont20, 9, 22, 6}-{cont10, 9, 34, 6}-{cont5, 9, 46, 5}-{cont2, 9, 57, 5}-{cont1, 9, 68, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */