programa
{
	
	funcao inicio()
	{
		inteiro cont_pessoas = 0, idade, cont_pessoas_50_60 = 0, cont_idade = 0, total_idade = 0
		inteiro cont_idade_150 = 0, cont_olhos_azuis = 0, cont_azuis_ruivo = 0
		real peso = 0.0, altura = 0.0, media_idade_altura = 0.0, porcent_olhos = 0.0
		inteiro cor_olhos, cor_cabelo
		
		enquanto(cont_pessoas < 20){
			cont_pessoas++
			escreva("Entre com sua idade:\n")
			leia(idade)
			cont_idade = cont_idade + idade
			escreva("Entre com seu peso:\n")
			leia(peso)
			se(idade > 50 e peso < 60.0){
				cont_pessoas_50_60++
			}
			escreva("Entre com sua altura(Em CENTÍMETROS):\n")
			leia(altura)
			se(altura < 150){
				cont_idade_150++
				total_idade = total_idade + idade
				media_idade_altura = total_idade / cont_idade_150
			}
			escreva("Escolha a cor dos seus olhos: \n\t 1-Azul \n\t 2-Preto \n\t 3-Verde \n\t 4-Castanho \nOpção:")
			leia(cor_olhos)
			se(cor_olhos == 1){
				cont_olhos_azuis++
				porcent_olhos = 
			}
			escreva("Escolha a cor do seu cabelo: \n\t 1-Preto \n\t 2-Castanho \n\t 3-Louro \n\t 4-Ruivo \nOpção:")
			leia(cor_cabelo)
			se(cor_cabelo == 4 e cor_olhos != 1){
				cont_azuis_ruivo++
			}
		}
		escreva("Número de pessoas com idade superior a 50 anos e peso inferior a 60 quilos: \n\t", cont_pessoas_50_60)
		escreva("\nA médias de idade das pessoas com menos de 150 centímetros(1,5 metros): \n\t", media_idade_altura)
		escreva("\nA porcentagem de pessoas com olhos azuis dentre todas as analisadas: \n\t", porcent_olhos)
		escreva("\nA quantidade de ruivos/as que não possui olhos azuis:", cont_azuis_ruivo)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 915; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */