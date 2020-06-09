programa
{
	
	funcao inicio()
	{
		escreva("Calculadora\n\n")
		
		inteiro cont1 = 1, cont2, cont3 = 2, cont4
		real S = 0.0
		
		enquanto(cont3 <= 10){
			cont2 = cont1 * cont1
			cont4 = cont3 * cont3
			S = S + (cont1 / cont2) 
			S = S - (cont3 / cont4)
			se(cont3 == 10){
				pare
			}
			senao{
				cont1 += 2
				cont3 += 2 
			}
		}
		escreva("O valor de S é: ", S)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 0; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {cont1, 8, 10, 5}-{cont2, 8, 21, 5}-{cont3, 8, 28, 5}-{cont4, 8, 39, 5}-{S, 9, 7, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */