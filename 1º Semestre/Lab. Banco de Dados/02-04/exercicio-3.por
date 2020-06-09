programa
{
	inclua biblioteca Matematica --> m
	
	funcao inicio()
	{
		escreva("População\n\n")
		
		real cid_a = 80000.0, cid_b = 200000.0
		inteiro cont = 0
		
		enquanto(cid_a <= cid_b){
			cid_a = cid_a + (cid_a * 0.03)
			cid_b = cid_b + (cid_b * 0.015)
			cont++
		}
		escreva("População de A:", m.arredondar(cid_a, 0), "\n")
		escreva("População de B:", m.arredondar(cid_b, 0), "\n")
		escreva("Anos decorridos: ", cont)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 185; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {cid_a, 9, 7, 5}-{cid_b, 9, 24, 5};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */