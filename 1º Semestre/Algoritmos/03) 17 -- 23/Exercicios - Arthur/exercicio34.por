programa
{
	
	funcao inicio()
	{
	escreva("Opnião sobre Filme\n\n")
	
	inteiro opcao, idade, cont_otimo = 0, cont_bom = 0, cont_reg = 0, cont_ruim = 0, cont_pes = 0, cont_total = 0, porcent_bom, porcent_reg
	inteiro porcent_pes, porcent_bom_reg, cont_idd = 0, media_idd_ruim, maior_idd_pes = 0, dif_ot_ruim, maior_idd_ot = 0 , maior_idd_ruim = 0
	
	para (inteiro i = 1; i <= 100; i++){
		escreva ("Entre com sua idade:\n")
		leia (idade)
		cont_total = cont_total + 1
		escreva ("Qual sua opinião sobre o filme: \n1- Ótimo \n2- Bom \n3- Regular \n4- Ruim \n5- Péssimo \n Opção:")
		leia (opcao)
		
		escolha (opcao){
			caso(1):
				cont_otimo = cont_otimo + 1
				se (idade > maior_idd_ot){
					maior_idd_ot = idade
				}
				pare
			caso(2):
				cont_bom = cont_bom + 1
				pare
			caso(3):
				cont_reg = cont_reg + 3
				pare
			caso(4):
				cont_ruim = cont_ruim + 4
				cont_idd = cont_idd + i
				se (idade > maior_idd_ruim){
					maior_idd_ruim = idade
				}
				pare
			caso(5):
				cont_pes = cont_pes + 5
				se (idade > maior_idd_pes){
					maior_idd_pes = idade
				}
				pare
		}
	}
		porcent_bom = cont_total * (cont_bom / 100)
		porcent_pes = cont_total * (cont_pes / 100)
		porcent_reg = cont_total * (cont_reg / 100)
		porcent_bom_reg = porcent_bom - porcent_reg
		media_idd_ruim = cont_idd / cont_ruim
		dif_ot_ruim = maior_idd_ot - maior_idd_ruim
		
		escreva ("A quantidade de ÓTIMOS é: ", cont_otimo, "\n")
		escreva ("A diferença de percentual entre BOM e REGULAR é: ", porcent_bom_reg, "\n")
		escreva ("A média de idade de quem votou RUIM é: ", media_idd_ruim, "\n")
		escreva ("A porcentagem de respostas PÉSSIMO é: ", porcent_pes, " e a pessoa mais velha a escolher essa opção tem ", maior_idd_pes, " anos\n")
		escreva("A diferença entre a pessoa mais velha que escolheu ÓTIMO e a pessoa mais velha que escolheu RUIM é: ", dif_ot_ruim, "\n")
	}
}