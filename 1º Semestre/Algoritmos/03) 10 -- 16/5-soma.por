programa
{
	
	funcao inicio()
	{
		real valor, produto = 0
		faca {
			escreva("Entre com um valor para soma(Digite 0 para sair): \n")
			leia(valor)
			produto = valor + produto
			escreva("SOMA ATUAL: ", produto, "\n")
		}enquanto(valor != 0)
		escreva("SOMA FINAL: " , produto)
	}
}