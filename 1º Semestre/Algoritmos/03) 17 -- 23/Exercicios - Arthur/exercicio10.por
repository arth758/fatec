programa
{
	
	funcao inicio()
	{
		escreva("Classe Eleitoral\n\n")
		
		inteiro idade
		
		escreva("Entre com a sua idade:\n")
		leia(idade)

		se (idade < 0){
			escreva("\nIdade inv�lida")
		}
		senao{
			se (idade < 16){
				escreva("\nN�o votante")
			}
			senao{
				se (idade >= 18 e idade <= 65){
					escreva("\nEleitor Obrigat�rio")
				}
				senao{
					escreva("\nEleitor Facultativo")
				}
			}
		}
	}
}