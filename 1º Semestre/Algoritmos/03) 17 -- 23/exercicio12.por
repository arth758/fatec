programa
{
	
	funcao inicio()
	{
		escreva("Animais\n\n")
		
		inteiro resposta
		
		escreva("Digite 1 para SIM e 2 para NÃO\n")
		escreva("Escolha uma das opções para chegar ao animal!\n\n")

		escreva("O animal é mamífero? ")
		leia(resposta)
		se (resposta == 1){
			escreva("É quadrúpede? ")
			leia(resposta)
			se (resposta == 1){
				escreva("É carnívoro? ")
				leia(resposta)
				se (resposta == 1){
					escreva("Animal escolhido: Leão")
					}
				senao{
					escreva("É herbívoro? ")
					se (resposta == 1){
						escreva("Animal escolhido: Cavalo")
						}
					senao{
						escreva("Animal não disponível")
						}
					}
				}
			senao{
				escreva("É bípede? ")
				leia(resposta)
				se (resposta == 1){
					escreva("É onívoro? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Humano")
						}
					senao{
						escreva("É frutívoro? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Macaco")
							}
						senao{
							escreva("Animal não disponível")
							}
						}
					}
				senao{
					escreva("É voador? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Morcego")
						}
					senao{
						escreva("É aquático? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Baleia")
							}
						senao{
							escreva("Animal não disponível")
							}
						}
					}
				}
			}
		senao{
			escreva("É uma ave? ")
			leia(resposta)
			se (resposta == 1){
				escreva("É uma ave não-voadora? ")
				leia(resposta)
				se (resposta == 1){
					escreva("É tropical? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Avestruz")
						}
					senao{
						escreva("É polar? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Pinguim")
							}
						senao{
							escreva("Animal não disponível")
							}
						}
					}
				senao{
					escreva("É nadadora? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Pato")
						}
					senao{
						escreva("De rapina? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Águia")
							}
						senao{
							escreva("Animal indisponível")
							}
						}
					}
				}
			senao{
				escreva("É réptil? ")
				leia(resposta)
				se (resposta == 1){
					escreva("Com casco? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Tartaruga")
						}
					senao{
						escreva("O animal é carnívoro? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Crocodilo")
							}
						senao{
							escreva("O animal tem patas? ")
							leia(resposta)
							se (resposta == 2){
								escreva("Animal escolhido: Cobra")
								}
							senao{
								escreva("Animal não disponível")
								}
							}
						}
					}
				senao{
					escreva("Nenhum animal encontrado")
					}
				}
			}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2806; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */