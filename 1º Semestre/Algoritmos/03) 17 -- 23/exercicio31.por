programa
{
	
	funcao inicio()
	{
		inteiro  s = 0, c = 0, o = 0, i = 0, mi = 0
		real ch = 0, cm = 0, cov = 0, coc = 0, coa = 0, ccc = 0, ccl = 0, ccp = 0, af = 0, afm = 0
		
		
		enquanto(i >= -1)
		{
				escreva ("Informe sua idade: ")
				leia (i)
				se (i == -1)
					{
					pare 
					}
				se (i > mi)
					{
					mi = i
					}
				escreva ("Informe seu sexo: \n1- Homem \n2- Mulher\n")
				leia (s)
				escolha (s)
					{
					caso 1: s = 1
					ch = ch + 1
					pare
					caso 2: s = 2
					cm = cm + 1
					pare
					}
				escreva ("Informe a cor dos seus olhos: \n1-Castanho \n2-Verde \n3-Azul\n")
				leia (o)
				escolha (o)
					{
					caso 1: o = 1
					coc = coc + 1
					pare
					caso 2: o = 2
					cov = cov + 1
					pare
					caso 3: o = 3
					coa = coa + 1
					pare
					}
				escreva ("Informe a cor do seu cabelo: \n1-Castanho \n2-Loiro \n3-Preto\n")
				leia (c)
				escolha (c)
					{
					caso 1: c = 1
					ccc = ccc + 1
					pare
					caso 2: c = 2
					ccl = ccl + 1
					pare
					caso 3: o = 3
					ccp = ccp + 1
					pare
					}
				
				se (s >= 1 e s < 2 e i >= 18 e i <= 35){
					afm = afm + 1
					}
				se (s == 2 e o == 2 e c == 2 e i >= 18 e i <= 35){
					af = af + 1
					}
				
				
			
		} 
		af = cm*(af/100)
		afm = ch*(afm/100)
		escreva ("A maior idade entre os habitante é "+mi+" anos.\n")

		escreva ("A porcentagem de homens entre 18 e 35 anos é:"+afm+"\n")

		escreva ("A porcentagem de mulheres entre 18 e 35 anos com cabelos loiros e olhos verdes é:"+af+"\n")
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1055; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */