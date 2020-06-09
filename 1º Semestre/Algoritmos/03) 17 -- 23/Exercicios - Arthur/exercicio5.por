programa
{
	funcao inicio()
	{
		inteiro dia,mes,ano
		inteiro dia_atual,mes_atual,ano_atual
		inteiro total_mes, total_ano, total_dias

		escreva("Calculadora de Dias\n\n")
		
		escreva ("Informe o dia atual:\n")
		leia (dia_atual)
		escreva ("Informe o mês atual:\n")
		leia(mes_atual)
		escreva ("Informe o ano atual:\n")
		leia(ano_atual)

		escreva ("Informe o dia do seu aniversário:\n")
		leia (dia)
		escreva ("Informe o mês do seu aniversário:\n")
		leia(mes)
		escreva ("Informe o ano do seu aniversário:\n")
		leia(ano)
		
		total_ano = (ano_atual-ano) * 360 
		total_mes = (mes_atual-mes) * 30
		total_dias = total_ano + total_mes + (dia_atual-dia)
		total_ano = total_dias / 360
		total_dias = total_dias - (total_ano * 360)
		total_mes = total_dias / 30
		total_dias = total_dias - (total_mes * 30)
		escreva("\nVocê possui ", total_ano," anos, ", total_mes, " meses e ", total_dias, " dias de vida!\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 10; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */