programa
{
	
	funcao inicio()
	{
		escreva("Calculadora\n\n")
		
		real cont1 = 500.0, cont2 = 450.0
		real total = 0.0

		enquanto(cont1 >= 50){
			total = total + ((2 / cont1) - (5 / cont2))
			se(cont1 >= 50){
				cont1 -= 100
				cont2 -= 100		
			}
			senao{
				pare
			}
		}
		escreva("O total é: ", total)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 207; 
 * @PONTOS-DE-PARADA = 12;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */