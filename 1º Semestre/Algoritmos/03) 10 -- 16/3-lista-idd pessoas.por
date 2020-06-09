programa
{
	
	funcao inicio()
	{
		inteiro cont_pessoas = 0, cont_pessoas_18 = 0, idade
		enquanto(cont_pessoas < 10){
			escreva("Entre com sua idade: ")
			leia(idade)
			se(idade >= 18){
				cont_pessoas_18++
			}
			cont_pessoas++
		}
		escreva("O total de pessoas com mais de 18 anos é: ", cont_pessoas_18)
	}
}