programa
{
	
	funcao inicio()
	{
		escreva("Vetores 3\n\n")
		
		const inteiro tamanho = 20, tamanho2 = 40
		inteiro v1[tamanho], v2[tamanho], uniao[tamanho2]

		escreva("Entre com os valores para o Vetor 1:\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva(c + 1, ": ")
			leia(v1[c])
			uniao[c] = v1[c]
		}
		escreva("\n")
		escreva("Entre com os valores para o Vetor 2:\n")
		para(inteiro c = 0; c < tamanho; c++){
			escreva(c + 1, ": ")
			leia(v2[c])
			uniao[c + 10] = v2[c]
		}

		//para(inteiro c = 0; c < tamanho; c++){
			//para(inteiro d = 0; d < tamanho; d++){
			//	se(v1[c] == v2[d]){
			//		uniao[c] = v1[c]
			//	}
			//	se(v1[c] != v2[d]){
			//		uniao[c + 1] = v2[d]
			//	}
			//}
		//}
		escreva("\nUnião dos Vetores:\n")
		para(inteiro c = 0; c < tamanho2; c++){
			escreva(uniao[c], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 105; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */