print('Relações')

list_A = []
list_B = []
el_a = ''
el_b = 'sair'
cont = 1
escolha = ''
matriz = []

print('===================================================================')
print("Entre com os elementos do conjunto A: (escreva SAIR para encerrar): ")
while el_a != "SAIR" and el_a != "sair":
    el_a = str(input("Elemento #{}: ".format(cont)))
    if el_a.upper() == "SAIR":
        break
    elif el_a.upper() != "SAIR":
        list_A.append(el_a)
    cont += 1

cont = 1
print("Entre com os elementos do conjunto B: (escreva SAIR para encerrar): ")
while el_b != "SAIR" and el_b != "sair":
    el_b = str(input("Elemento #{}: ".format(cont)))
    if el_b.upper() == "SAIR":
        break
    elif el_b.upper != "SAIR":
        list_B.append(el_b)
    cont += 1
print('===================================================================')
print('Selecione uma Relação: \n\t1-Igualdade\n\t2-Maior ou igual\n\t3-Menor ou igual')
escolha = str(input('Escolha: '))
if escolha == '1':
    linhas = len(list_A)
    colunas = len(list_B)
    cont = 0
    for lin in range(linhas):
        matriz.append([])
        for el in list_A:
            matriz[lin].append(el)
    cont += 1
elif escolha == '2':
    print('2')
elif escolha == '3':
    print('3')
else:
    print('Entre com um número válido')

print(matriz)