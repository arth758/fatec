print("Interseção de conjuntos A e B\n")

list_A = []
el_A = ""
list_B = []
el_B = ""
cont1 = -1
A_B = []

try:
    print("Entre com os valores para o conjunto A (digite X para ir para o próximo): ")
    while el_A != "X" and  el_A != "x":
        el_A = str(input('Opção:'))
        if  el_A == "X" and  el_A == "x":
            break
        elif el_A != "X" and  el_A != "x":
            list_A.append(el_A)
            A_B.append(el_A)

    print("Entre com os valores para o conjunto B (digite X para sair): ")
    while el_B != "X" and  el_B != "x":
        el_B = str(input('Opção:'))
        if  el_B == "X" and  el_B == "x":
            break
        elif el_B != "X" and  el_B != "x":
            list_B.append(el_B)
            A_B.append(el_B)

    print("\nElementos de A:")
    for n in list_A:
        print(n)

    print("\nElementos de B:")
    for n in list_B:
        print(n)

    print('\nAUB:')
    for n in A_B:
        print(n)

except:
    print()