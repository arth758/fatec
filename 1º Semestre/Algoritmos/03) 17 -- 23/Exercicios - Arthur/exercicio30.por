programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		escreva("Imposto de Renda")
		
		caracter cpf
		real  imposto, salario = 998.0, renda,n_dependentes, desc_depend = 0.0
		
		para (inteiro i=0;i<11;i++)
		{
		
		escreva ("\n\nEntre com o seu CPF:\n")
		leia (cpf)

		escreva ("Entre com o número de dependentes:\n")
		leia (n_dependentes)

		escreva ("Entre com sua renda em salarios minimos:\n")
		leia (renda)

		desc_depend = n_dependentes * 5
		

		 se (renda < 2){
		 	escreva("Você é isento!") 
			}
		 senao se(renda >= 2 e renda <= 3){
			imposto = salario * renda
			imposto = imposto - ( imposto * (desc_depend / 100))
			imposto = imposto - (imposto * 5) / 100
			imposto = (salario * renda) - imposto
			escreva("O valor do imposto de renda a ser pago é: ", mat.arredondar(imposto, 3))			
			}	
		 senao se(renda > 3 e renda <= 5){
		 	imposto = salario * renda
			imposto = imposto - ( imposto * (desc_depend / 100))
			imposto = imposto - (imposto * 10) / 100
			imposto = (salario * renda) - imposto
			escreva("O valor do imposto de renda a ser pago é: ", mat.arredondar(imposto, 3))	
		 	}
		senao se(renda > 5 e renda <= 7){
		 	imposto = salario * renda
			imposto = imposto - ( imposto * (desc_depend / 100))
			imposto = imposto - (imposto * 15) / 100
			imposto = (salario * renda) - imposto
			escreva("O valor do imposto de renda a ser pago é: ", mat.arredondar(imposto, 3))	
		 	}
		senao {
		 	imposto = salario * renda
			imposto = imposto - ( imposto * (desc_depend / 100))
			imposto = imposto - (imposto * 20) / 100
			imposto = (salario * renda) - imposto
			escreva("O valor do imposto de renda a ser pago é: ", mat.arredondar(imposto, 3))	
		 	}
		}
	}
}