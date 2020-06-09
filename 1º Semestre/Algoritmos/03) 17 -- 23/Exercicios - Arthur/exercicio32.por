programa
{
	
	funcao inicio()
	{
		escreva("Anacleto e Felisberto\n\n")
		
		real anacleto = 1.50, felisberto = 1.10
		inteiro anos = 0

		faca
		{
			anacleto = anacleto + 0.02
			felisberto = felisberto + 0.03
			anos++
		}enquanto(anacleto > felisberto)
		
		escreva ("Felisberto demorará ", anos, " anos para passar Anacleto")
	}
}
