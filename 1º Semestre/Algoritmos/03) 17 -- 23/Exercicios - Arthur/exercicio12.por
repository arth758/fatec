programa
{
	
	funcao inicio()
	{
		escreva("Animais\n\n")
		
		inteiro resposta
		
		escreva("Digite 1 para SIM e 2 para N�O\n")
		escreva("Escolha uma das op��es para chegar ao animal!\n\n")

		escreva("O animal � mam�fero? ")
		leia(resposta)
		se (resposta == 1){
			escreva("� quadr�pede? ")
			leia(resposta)
			se (resposta == 1){
				escreva("� carn�voro? ")
				leia(resposta)
				se (resposta == 1){
					escreva("Animal escolhido: Le�o")
					}
				senao{
					escreva("� herb�voro? ")
					se (resposta == 1){
						escreva("Animal escolhido: Cavalo")
						}
					senao{
						escreva("Animal n�o dispon�vel")
						}
					}
				}
			senao{
				escreva("� b�pede? ")
				leia(resposta)
				se (resposta == 1){
					escreva("� on�voro? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Humano")
						}
					senao{
						escreva("� frut�voro? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Macaco")
							}
						senao{
							escreva("Animal n�o dispon�vel")
							}
						}
					}
				senao{
					escreva("� voador? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Morcego")
						}
					senao{
						escreva("� aqu�tico? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Baleia")
							}
						senao{
							escreva("Animal n�o dispon�vel")
							}
						}
					}
				}
			}
		senao{
			escreva("� uma ave? ")
			leia(resposta)
			se (resposta == 1){
				escreva("� uma ave n�o-voadora? ")
				leia(resposta)
				se (resposta == 1){
					escreva("� tropical? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Avestruz")
						}
					senao{
						escreva("� polar? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: Pinguim")
							}
						senao{
							escreva("Animal n�o dispon�vel")
							}
						}
					}
				senao{
					escreva("� nadadora? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Pato")
						}
					senao{
						escreva("De rapina? ")
						leia(resposta)
						se (resposta == 1){
							escreva("Animal escolhido: �guia")
							}
						senao{
							escreva("Animal indispon�vel")
							}
						}
					}
				}
			senao{
				escreva("� r�ptil? ")
				leia(resposta)
				se (resposta == 1){
					escreva("Com casco? ")
					leia(resposta)
					se (resposta == 1){
						escreva("Animal escolhido: Tartaruga")
						}
					senao{
						escreva("O animal � carn�voro? ")
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
								escreva("Animal n�o dispon�vel")
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