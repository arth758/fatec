programa
{
	inclua biblioteca Matematica --> mat 
	
	funcao inicio()
	{
		escreva("Eleições\n\n")
		
		real percentual, total_votos = 0.0, candidato_1 = 0.0, candidato_2 = 0.0, candidato_3 = 0.0, candidato_4 = 0.0, nulos = 0.0, brancos = 0.0
		inteiro voto_atual
		
		escreva("Selecione seu Candidato:\n\t1-Candidato 1\n\t2-Candidato 2\n\t3-Candidato 3\n\t4-Candidato 4\n\t5-Nulo\n\t6-Branco\n\t0-Sair\nVoto: ")
		leia(voto_atual)
		
		enquanto(voto_atual != 0){
			se (voto_atual == 1)
			{
				candidato_1 = candidato_1++
				total_votos = total_votos++
			}
			se (voto_atual == 2)
			{
				candidato_2 = candidato_2++
				total_votos = total_votos++
			}
			se (voto_atual == 3)
			{
				candidato_3 = candidato_3++
				total_votos = total_votos++
			}
			se (voto_atual == 4)
			{
				candidato_4 = candidato_4++
				total_votos = total_votos++
			}
			se (voto_atual == 5)
			{
				nulos = nulos++
				total_votos = total_votos++
			}
			se (voto_atual == 6)
			{
				brancos = brancos++
				total_votos = total_votos++
			}
			
			escreva("Selecione seu candidato:\n")
			leia(voto_atual)
		}
		
		escreva("\nForam computados ", total_votos, " votos!\n\n")
		
		percentual = (candidato_1 / total_votos) * 100
		escreva("Candidato 1 possui ", candidato_1, "Votos, representando: ", mat.arredondar(percentual, 2), "%\n\n")
		
		percentual = (candidato_2 / total_votos) * 100
		escreva("Candidato 2 possui ", candidato_2, " Votos, representando: ", mat.arredondar(percentual, 2), "%\n\n")
		
		percentual = (candidato_3 / total_votos) * 100
		escreva("Candidato 3 posui ", candidato_3, " Votos, representando: ", mat.arredondar(percentual, 2), "%\n\n")
		
		percentual = (candidato_4 / total_votos) * 100
		escreva("Candidato 4 possui ", candidato_4, " Votos, representando: ", mat.arredondar(percentual, 2), "%\n\n")
		
		percentual = (brancos / total_votos) * 100
		escreva("Votos Brancos totalizaram ", brancos, " Votos, representando: ", mat.arredondar(percentual, 2), "%\n\n")
		
		percentual = (nulos / total_votos) * 100
		escreva("Votos Nulos totalizaram ", nulos, " Votos, representando: ", mat.arredondar(percentual, 2), "%\n")
	}
}