programa
{
	
	funcao inicio()
	{
		escreva("Dados do Habitantes\n\n")
		
		inteiro sexo = 0, cor_cabelo = 0, cor_olhos = 0, idade = 0, maior_idade = 0, cont_cab_loiro = 0, cont_cab_preto = 0
		inteiro sexo_masc = 0, sexo_fem = 0, cont_olhos_verdes = 0, cont_olhos_cast = 0, cont_olhos_azuis = 0, cont_cab_cast = 0 
		real porcent_masc_18_35 = 0.0, porcent_fem_18_35 = 0.0

		enquanto(idade != -1){
			escreva ("Informe seu sexo: \n1- Homem \n2- Mulher\n")
			leia (sexo)
			escolha (sexo){
				caso(1):
				sexo_masc = sexo_masc + 1 
				caso(2):
				sexo_fem = sexo_fem + 2
			}
			escreva ("Informe a cor dos seus olhos: \n1-Castanho \n2-Verde \n3-Azul\n")
			leia (cor_olhos)
			escolha (cor_olhos){
				caso(1):
					cont_olhos_cast++
				caso(2):
					cont_olhos_verdes = cont_olhos_verdes + 1
				caso(3):
					cont_olhos_azuis = cont_olhos_azuis + 1 
			}
			escreva ("Informe a cor do seu cabelo: \n1-Castanho \n2-Loiro \n3-Preto\n")
			leia (cor_cabelo)
			escolha (cor_cabelo){
				caso(1):
					cont_cab_cast = cont_cab_cast + 1
				caso(2):
					cont_cab_loiro = cont_cab_loiro + 1
				caso(3):
					cont_cab_preto = cont_cab_preto + 1
			}
			escreva ("Informe sua idade: ")
			leia (idade)
			se (idade > maior_idade){
				maior_idade = idade
			}

			se (sexo >= 1 e sexo < 2 e idade >= 18 e idade <= 35){
				porcent_fem_18_35 = porcent_fem_18_35 + 1
			}
			se (sexo == 2 e cor_olhos == 2 e cor_cabelo == 2 e idade >= 18 e idade <= 35){
				porcent_masc_18_35 = porcent_masc_18_35 + 1
			}
		}
		porcent_masc_18_35 = sexo_masc * (porcent_masc_18_35 / 100)
		porcent_fem_18_35 = sexo_fem * (porcent_fem_18_35 / 100)
		
		escreva ("A maior idade entre os habitante é ", maior_idade, " anos.")
		escreva ("A porcentagem de homens entre 18 e 35 anos é:", porcent_fem_18_35, "\n")
		escreva ("A porcentagem de mulheres entre 18 e 35 anos com cabelos loiros e olhos verdes é:", porcent_masc_18_35, "\n")
		
	}
}