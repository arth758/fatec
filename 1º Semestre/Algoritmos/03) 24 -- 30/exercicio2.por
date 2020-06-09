programa
{
	inclua biblioteca Tipos --> tip
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real vetor_1[6], vetor_2[6], resultado[6]
		caracter operacao[6]
		inteiro c = 0

		para(c; c < 6; c++){
			escreva("Entre com um valor qualquer pra o Vetor 1: ")
			leia(vetor_1[c])
		}
		
		para(c = 0; c < 6; c++){
			escreva("Entre com um valor qualquer pra o Vetor 2: ")
			leia(vetor_2[c])
		}

		operacao[0] = '+'
		operacao[1] = '-'
		operacao[2] = '*'
		operacao[3] = '/'
		operacao[4] = '%'
		operacao[5] = '^'

		resultado[0] = vetor_1[0] + vetor_2[0]
		resultado[1] = vetor_1[1] - vetor_2[1]
		resultado[2] = vetor_1[2] * vetor_2[2]
		resultado[3] = vetor_1[3] / vetor_2[3]
		resultado[4] = tip.real_para_inteiro(vetor_1[4]) % tip.real_para_inteiro(vetor_2[4])
		resultado[5] = mat.potencia(vetor_1[5], vetor_2[5])

		para(c = 0; c < 6; c++){
			escreva(vetor_1[c], " ", operacao[c], " ", vetor_2[c], " = ", mat.arredondar(resultado[c], 3), "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 530; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */