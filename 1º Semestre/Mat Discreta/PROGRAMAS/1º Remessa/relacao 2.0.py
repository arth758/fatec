print("Relação de conjuntos A e B\n")

list_A = []
el_A = ""
list_B = []
el_B = ""
op = ""
list_A_B = []
relacao = []
list_A_rel = []
list_B_rel = []
rel = 0
n = 0
m = 0

try:
    print("Entre com os valores para o conjunto A (digite X para ir para o próximo): ")
    while el_A != "X" and el_A != "x":
        el_A = str(input('Opção:'))
        if el_A == "X" and el_A == "x":
            break
        elif el_A != "X" and el_A != "x":
            list_A.append(el_A)

    print("Entre com os valores para o conjunto B (digite X para sair): ")
    while el_B != "X" and el_B != "x":
        el_B = str(input('Opção:'))
        if el_B == "X" and el_B == "x":
            break
        elif el_B != "X" and el_B != "x":
            list_B.append(el_B)

    print("\nSelecione o tipo de relação que deseja:\n\t\t1-Igualdade\n\t\t2-Maior\n\t\t3-Menor")
    op = input("Opção: ")
    if op == "1":
        for n in list_A:
            for m in list_B:
                if n == m:
                    list_A_rel.append(n)
                    list_B_rel.append(m)
                    relacao.append(' = ')
    elif op == "2":
        for n in list_A:
            for m in list_B:
                if n > m:
                    list_A_rel.append(n)
                    list_B_rel.append(m)
                    relacao.append(' > ')
    elif op == "3":
        for n in list_A:
            for m in list_B:
                if n < m:
                    list_A_rel.append(n)
                    list_B_rel.append(n)
                    relacao.append(' < ')
    elif op != 1 and op != 2 and op != 3:
        print("Entre com uma opção válida")

    if op == "1":
        print("\nElemntos iguais nos conjuntos:")
    elif op == "2":
        print("\nElementos do conjunto A maiores aos do conjunto B:")
    elif op == "3":
        print("\nElementos do conjunto A menores aos do conjunto B:")

    n = 0

    while n < len(list_A_rel):
        print(list_A_rel[n], relacao[n], list_B_rel[n])
        n += 1

except:
    print("deu ruim")