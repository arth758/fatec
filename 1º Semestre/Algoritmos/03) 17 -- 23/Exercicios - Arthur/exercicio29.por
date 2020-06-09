programa
{

	funcao inicio()
	{
		escreva("Empresas\n\n")
		
		inteiro cod_empresa = 1, n_func = 0, porte = 0
		inteiro maior_porte_me = 0, maior_porte_peq = 0, maior_porte_med = 0, maior_porte_gd = 0
		inteiro maior_n_func_me = 0, maior_n_func_peq = 0, maior_n_func_med = 0, maior_n_func_gd = 0
		inteiro cod_me = 0, cod_peq = 0, cod_med = 0, cod_gd = 0

		
		enquanto(cod_empresa != 0){
			escreva("Digite o código da empresa(0 para sair):\n")
			leia(cod_empresa)
			se(cod_empresa == 0){
				pare
			}
			escreva("Entre com o número de funcionários:\n")
			leia(n_func)
			escreva("Selecione o porte da empresa: \n\t1-Grande \n\t2-Média \n\t3-Pequena \n\t4-Microempresa \n")
			leia(porte)
			
			escolha(porte){
				caso(1):{
					se(n_func >= maior_n_func_gd e porte >= maior_porte_gd){
						maior_n_func_gd = n_func
						maior_porte_gd = porte
						cod_gd = cod_empresa
						pare
					}
				}
				caso(2):{
					se(n_func >= maior_n_func_med e porte >= maior_porte_med){
						maior_n_func_med = n_func
						maior_porte_med = porte
						cod_med = cod_empresa
						pare
					}
				}
				caso(3):{
					se(n_func >= maior_n_func_peq e porte >= maior_porte_peq){
						maior_n_func_peq = n_func
						maior_porte_peq = porte
						cod_peq = cod_empresa
						pare
					}
				}
				caso(4):{
					se(n_func >= maior_n_func_me e porte >= maior_porte_me){
						maior_n_func_me = n_func
						maior_porte_me = porte
						cod_me = cod_empresa
						pare
					}
				}
				caso contrario:{
					pare
				}
			}
		}
		escreva("A empresa com porte 'MICROEMPRESA' com maior número de funcionários possui código: ", cod_me, " e ", maior_n_func_me, " funcionários\n\n")
		escreva("A empresa com porte 'PEQUENA' com maior número de funcionários possui código: ", cod_peq, " e ", maior_n_func_peq, " funcionários\n\n")
		escreva("A empresa com porte 'MÉDIA' com maior número de funcionários possui código: ", cod_med, " e ", maior_n_func_med, " funcionários\n\n")
		escreva("A empresa com porte 'GRANDE' com maior número de funcionários possui código: ", cod_gd, " e ", maior_n_func_gd, " funcionários\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1965; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */