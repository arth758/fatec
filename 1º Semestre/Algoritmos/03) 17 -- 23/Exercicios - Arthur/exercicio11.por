programa
{
	
	funcao inicio()
	{
		cadeia pais_1, pais_2, pais_3
		inteiro ouro_1, ouro_2, ouro_3
		inteiro prata_1, prata_2, prata_3
		inteiro bronze_1, bronze_2, bronze_3
		inteiro total_1, total_2, total_3
		
		escreva("Classifica��o Ol�mpica\n")
		
		escreva("Entre com o nome do 1� pa�s:\n")
		leia(pais_1)
		escreva("Quantas medalhas de ouro tem esse pa�s? ")
		leia(ouro_1)
		escreva("E de prata? ")
		leia(prata_1)
		escreva("E de bronze? ")
		leia(bronze_1)

		escreva("Entre com o nome do 2� pa�s:\n")
		leia(pais_2)
		escreva("Quantas medalhas de ouro tem esse pa�s? ")
		leia(ouro_2)
		escreva("E de prata? ")
		leia(prata_2)
		escreva("E de bronze? ")
		leia(bronze_2)

		escreva("Entre com o nome do 3� pa�s:\n")
		leia(pais_3)
		escreva("Quantas medalhas de ouro tem esse pa�s? ")
		leia(ouro_3)
		escreva("E de prata? ")
		leia(prata_3)
		escreva("E de bronze? ")
		leia(bronze_3)

		total_1 = ((ouro_1 * 3) + (prata_1 * 2) + (bronze_1 * 1)) / 6
		total_2 = ((ouro_2 * 3) + (prata_2 * 2) + (bronze_2 * 1)) / 6
		total_3 = ((ouro_3 * 3) + (prata_3 * 2) + (bronze_3 * 1)) / 6

		escreva("CLASSIFICA��O GERAL\n\n")

		se ((total_1 > total_2) e (total_1 > total_3)){
			
			escreva("1� Lugar:", pais_1, "\n")
			
			se (total_2 > total_3){
				escreva("2� Lugar: ", pais_2, "\n")
				escreva("3� Lugar: ", pais_3, "\n")
			}
			
			senao {
				escreva("2� Lugar: ", pais_3, "\n")
				escreva("3� Lugar: ", pais_2, "\n")
			}
		}
			
		se ((total_2 > total_1) e (total_2 > total_3)){
			
			escreva("1� Lugar:", pais_2, "\n")
			
			se (total_1 > total_3){
				escreva("2� Lugar: ", pais_1, "\n")
				escreva("3� Lugar: ", pais_3, "\n")
			}
			
			senao {
				escreva("2� Lugar: ", pais_3, "\n")
				escreva("3� Lugar: ", pais_1, "\n")
			}
		}
				
		se ((total_3 > total_1) e (total_3 > total_2)){
			
			escreva("1� Lugar:", pais_3, "\n")
			
			se (total_1 > total_2){
				escreva("2� Lugar:", pais_1, "\n")
				escreva("3� Lugar:", pais_2, "\n")
			}
			
			senao {
				escreva("2� Lugar:", pais_2, "\n")
				escreva("3� Lugar:", pais_1, "\n")
			}
		}
			
	}
} 