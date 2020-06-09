programa
{
	
	funcao inicio()
	{
		escreva("Classe Eleitoral\n\n")
		
		inteiro idade
		
		escreva("Entre com a sua idade:\n")
		leia(idade)

		se (idade < 0){
			escreva("\nIdade inválida")
		}
		senao{
			se (idade < 16){
				escreva("\nNão votante")
			}
			senao{
				se (idade >= 18 e idade <= 65){
					escreva("\nEleitor Obrigatório")
				}
				senao{
					escreva("\nEleitor Facultativo")
				}
			}
		}
	}
}