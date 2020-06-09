programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		escreva("Calculadora")
		
		real cont1 = 1.0, n, cont2 = 3.0
		real H = 0.0
		
		para(cont2; cont2 < 20; cont2 += 4){
			H = H + ((1 / mat.potencia(cont1, 3.0)) - (1 / mat.potencia(cont2, 3.0)))
			se(cont2 < 19){
				cont1 += 4
				cont2 += 4
			}
			senao se(cont2 == 19){
				pare
			}
		}
		escreva("O valor de H é: ", mat.arredondar(H, 3))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 264; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {H, 10, 7, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */