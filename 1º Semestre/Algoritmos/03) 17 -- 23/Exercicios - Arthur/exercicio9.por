programa
{
	funcao inicio()
	{
		escreva("Signos do Zodíaco\n\n")
		
		inteiro dia, mes
		
		escreva("Entre com o dia:\n")
		leia (dia)
		escreva("Entre com o mês:\n")
		leia (mes)

		se((dia >= 21 e mes == 3) ou (dia <= 19 e mes == 4)){
			escreva("\nÁries")
		}
		senao se((dia >= 20 e mes == 4) ou (dia <= 20 e mes == 5)){
			escreva("\nTouro")
		}
		senao se ((dia >= 21 e mes == 5) ou (dia <= 20 e mes == 6)){
			escreva("\nGêmeos")
		}
		senao se ((dia >= 21 e mes == 6) ou (dia <= 22 e mes == 7)){
			escreva("\nCâncer")
		}
		senao se ((dia >= 20 e mes == 7) ou (dia <= 22 e mes == 8)){
			escreva("\nLeão")
		}
		senao se ((dia >= 23 e mes == 8) ou (dia <= 22 e mes == 9)){
			escreva("\nVirgem")
		}
		senao se ((dia >= 23 e mes == 9) ou (dia <= 22 e mes == 10)){
			escreva("\nLibra")
		}
		senao se ((dia >= 23 e mes == 10) ou (dia <= 21 e mes == 11)){
			escreva("\nEscorpião")
		}
		senao se ((dia >= 22 e mes == 11) ou (dia <= 21 e mes == 12)){
			escreva("\nSagitário")
		}
		senao se ((dia >= 22 e mes == 12) ou (dia <= 19 e mes == 1)){
			escreva("\nCapricórnio")
		}
		senao se ((dia >= 20 e mes == 1) ou (dia <= 18 e mes == 2)){
			escreva("\nAquário")
		}
		senao se ((dia >= 19 e mes == 2) ou (dia <= 20 e mes == 3)){
			escreva("\nPeixes")
		}
		senao {
			escreva("\nDados Inválidos")
														}
					
			}
	}
