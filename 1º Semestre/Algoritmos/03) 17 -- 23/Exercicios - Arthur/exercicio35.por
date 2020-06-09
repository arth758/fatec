programa
{
	
	funcao inicio()
	{
		escreva("Turnos de Elevadores\n\n")
		
		inteiro elevador = 0, periodo
		real cont_el_1 = 0.0, cont_el_2 = 0.0, cont_el_3 = 0.0,  cont_matutino = 0.0, cont_vesp = 0.0, cont_noturno = 0.0
		real porcent_matutino, porcent_vesp, porcent_not, porcent_mais_menos, porcent_serv_prest, cont_total = 0.0
		
		enquanto (elevador < 4){ 
			cont_total = cont_total + 1
			
			escreva ("Qual elevador você mais usa: \n1- Elevador 1 \n2- Elevador 2 \n3- Elevador 3\nOpção:")
			leia (elevador)
			se(elevador == 4){
				pare
			}
			
			escolha (elevador){
				caso(1):
				cont_el_1 = cont_el_1 + 1
				pare
				caso(2):
				cont_el_2 = cont_el_2 + 1 
				pare
				caso(3):
				cont_el_3 = cont_el_3 + 1 
				pare
			}
			escreva ("Em que parte do dia você usa o elevador: \n1-Matutino \n2-Vespertino \n3- Norturno \n")
			leia (periodo)
			escolha (periodo){
				caso(1):
				cont_matutino = cont_matutino + 1 
				pare
				caso(2):
				cont_vesp = cont_vesp + 1
				pare
				caso(3):
				cont_noturno = cont_noturno + 1
				pare
			}			
			}
			
			se (cont_el_1 > cont_el_2 e cont_el_1 > cont_el_3)
			{
				se (cont_matutino > cont_vesp e cont_matutino > cont_noturno)
				{
					escreva ("O elevador mais frequentado é o número 1 e o seu maior fluxo é no periodo matutino\n")
				}
				senao se (cont_vesp > cont_matutino e cont_vesp > cont_noturno)
				{
					escreva ("O elevador mais frequentado é o número 1 e o seu maior fluxo é no periodo vespertino\n")
				}
				senao
				{
					escreva ("O elevador mais frequentado é o número 1 e o seu maior fluxo é no periodo noturno\n")
				}	
			}
			senao se (cont_el_2 > cont_el_1 e cont_el_2 > cont_el_3)
			{
				se (cont_matutino > cont_vesp e cont_matutino > cont_noturno)
				{
					escreva ("O elevador mais frequentado é o número 2 e o seu maior fluxo é no periodo matutino\n")
				}
				senao se (cont_vesp > cont_matutino e cont_vesp > cont_noturno)
				{
					escreva ("O elevador mais frequentado é o número 2 e o seu maior fluxo é no periodo vespertino\n")
				}
				senao
				{
					escreva ("O elevador mais frequentado é o número 2 e o seu maior fluxo é no periodo noturno\n")
				}		
			}
			senao
			{
				se (cont_matutino > cont_vesp e cont_matutino > cont_noturno)
				{
					escreva ("O elevador mais frequentado é o número 3 e o seu maior fluxo é no periodo matutino\n")
				}
				senao se (cont_vesp > cont_matutino e cont_vesp > cont_noturno)
				{
					escreva ("O elevador mais frequentado é o número 3 e o seu maior fluxo é no periodo vespertino\n")
				}
				senao
				{
					escreva ("O elevador mais frequentado é o número 3 e o seu maior fluxo é no periodo noturno\n")
				}		
			}
			
			se (cont_matutino > cont_vesp e cont_matutino > cont_noturno)
			{
				se (cont_el_1 > cont_el_2 e cont_el_1 > cont_el_3)
				{
					escreva ("O periodo mais usado de todos é o matutino e pertence ao elevador 1\n")
				}
				senao se (cont_el_2 > cont_el_1 e cont_el_2 > cont_el_3)
				{
					escreva ("O periodo mais usado de todos é o matutino e pertence ao elevador 2\n")
				}
				senao
				{
					escreva ("O periodo mais usado de todos é o matutino e pertence ao elevador 3\n")
				}	
			}
			senao se (cont_vesp > cont_matutino e cont_vesp > cont_noturno)
			{
				se (cont_el_1 > cont_el_2 e cont_el_1 > cont_el_3)
				{
					escreva ("O periodo mais usado de todos é o vespertino e pertence ao elevador 1\n")
				}
				senao se (cont_el_2 > cont_el_1 e cont_el_2 > cont_el_3)
				{
					escreva ("O periodo mais usado de todos é o vespertino e pertence ao elevador 2\n")
				}
				senao
				{
					escreva ("O periodo mais usado de todos é o vespertino e pertence ao elevador 3\n")
				}	
			}		
			senao
			{
				se (cont_el_1 > cont_el_2 e cont_el_1 > cont_el_3)
				{
					escreva ("O periodo mais usado de todos é o noturno e pertence ao elevador 1\n")
				}
				senao se (cont_el_2 > cont_el_1 e cont_el_2 > cont_el_3)
				{
					escreva ("O periodo mais usado de todos é o noturno e pertence ao elevador 2\n")
				}
				senao
				{
					escreva ("O periodo mais usado de todos é o noturno e pertence ao elevador 3\n")
				}		
			}
			
			porcent_matutino = cont_total * (cont_matutino / 100) 
			porcent_vesp = cont_total * (cont_vesp / 100) 
			porcent_not = cont_total * (cont_noturno / 100)
			
			se (cont_matutino > cont_vesp e cont_vesp > cont_noturno)
			{
				porcent_mais_menos = porcent_matutino - porcent_not
				escreva ("A diferança do mais usado para o menos usado é: ", porcent_mais_menos, "\n")
			}
			senao se (cont_vesp > cont_matutino e cont_matutino > cont_noturno)
			{
				porcent_mais_menos = porcent_vesp - porcent_not
				escreva ("A diferança do mais usado para o menos usado é: ", porcent_mais_menos, "\n")	
			}
			senao se (cont_noturno > cont_matutino e cont_matutino > cont_vesp)
			{
				porcent_mais_menos = porcent_not - porcent_vesp
				escreva ("A diferança do mais usado para o menos usado é: ", porcent_mais_menos, "\n")
			}
			senao 
			{
				porcent_mais_menos = porcent_not - porcent_matutino
				escreva ("A diferança do mais usado para o menos usado é: ", porcent_mais_menos, "\n")
			}
			
			se (cont_matutino > cont_vesp e cont_vesp > cont_noturno)
			{
				escreva ("O porcentual do elevador de média utilização é: ", porcent_vesp, "\n")
			}
			senao se (cont_vesp > cont_matutino e cont_matutino > cont_noturno)
			{
				escreva ("O porcentual do elevador de média utilização é: ", porcent_matutino, "\n")	
			}
			senao se (cont_vesp > cont_noturno e cont_noturno > cont_matutino)
			{
				escreva ("O porcentual do elevador de média utilização é: ", porcent_not, "\n")	
			}
			senao se (cont_noturno > cont_matutino e cont_matutino > cont_vesp)
			{
				escreva ("O porcentual do elevador de média utilização é: ", porcent_matutino, "\n")
			}
			senao se (cont_noturno > cont_vesp e cont_vesp > cont_matutino)
			{
				escreva ("O porcentual do elevador de média utilização é: ", porcent_vesp, "\n")
			}
			senao 
			{
				escreva ("O porcentual do elevador de média utilização é: ", porcent_not, "\n")
			}
	}
}