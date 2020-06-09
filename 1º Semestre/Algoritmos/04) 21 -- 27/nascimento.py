print("Data de Nascimento\n")

dia, mes, ano = str(input("Entre com a data no formato dd/mm/aaaa: ")).split('/')
dia = int(dia)
mes = int(mes)
ano = int(ano)

if dia < 32 and mes < 12 and ano > 1900 and ano < 2100:
    meses = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro"," Novembro", "Dezembro"]
    print("Você nasceu em: ")
    print("%s de %s de %s" %(dia, meses[mes - 1], ano))

else:
    print("Entre com uma data válida!")

