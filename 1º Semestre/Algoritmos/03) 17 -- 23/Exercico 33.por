programa
{
	
	funcao inicio()
	{
		inteiro total_nascidos = 0, msc_prematuro = 0, fem_prematuro = 0, msc_nao_prematuro = 0, fem_nao_prematuro = 0
		inteiro total_prematuro = 0, total_nao_prematuro = 0, total_dias = 0, dias = 0, dia[16777216], x = 0, n = 0, q = 1
	
		escreva ("Deseja cadastrar nascimento de alguma criança? (Para SIM digite 1 / para NÃO digite 2)\nOpção: ")
		leia (q)
		
		enquanto (q == 1){
			inteiro sexo = 0, prematuro = 0
					
			
			escreva ("Criança é prematura? (Para SIM digite 1 / para NÃO digite 2)\nOpção: ")
			leia (prematuro)
			
			se (prematuro == 1){
				escreva ("Qual o sexo da criança? (Para MASCULINO digite 1 / para FEMININO digite 2)\nOpção: ")
				leia (sexo)
				
				se (sexo == 1){
					msc_prematuro = msc_prematuro + 1
				}
				
				senao{
					fem_prematuro = fem_prematuro + 1
				}

				escreva ("Quantos dias ela ficou no incubadora?\n")
				leia (dias)
				
				dia[x] = dias

				total_dias = total_dias + dias
				total_prematuro = total_prematuro + 1
				total_nascidos = total_nascidos + 1
			}
			
			senao{
				escreva ("Qual o sexo da criança? (Para MASCULINO digite 1 / para FEMININO digite 2)\nOpção: ")
				leia (sexo)
				
				se (sexo == 1){
					msc_nao_prematuro = msc_nao_prematuro + 1
				}
				
				senao{
					fem_nao_prematuro = fem_nao_prematuro + 1
				}
				
				total_nao_prematuro = total_nao_prematuro + 1
				total_nascidos = total_nascidos + 1	
			}
			
			x = x + 1 
			escreva ("Deseja cadastrar outra criança? (Para SIM digite 1 / para NÃO digite 2)\nOpção: ")
			leia (q)
		}

		para (inteiro i = 0; i <= x; i++){
			se(dia[i] > n){
				n = dia[i]
			}
		}
		
		escreva ("Porcentagem recém-nascidos prematuros:", 100 / total_nascidos * total_prematuro,"% \n")
		escreva ("Porcentagem recém-nascidos prematuros MENINOS:", 100 / total_prematuro * msc_prematuro ,"% \n")
		escreva ("Porcentagem recém-nascidos prematuros MENINAS:", 100 / total_prematuro * fem_prematuro ,"% \n")
		escreva ("Média de Dias de permanência dos recém-nascidos prematuros na incubadora: ", total_dias / total_prematuro , "\n")
		escreva ("Maior número de dias que um recém-nascido prematuro permaneceu na incubadora: ",n," dias \n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2082; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */