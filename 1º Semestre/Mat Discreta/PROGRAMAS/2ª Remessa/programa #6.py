print("Programa #6 - Diferença de Conjuntos")

list_A = []
list_B = []
list_A_B = []
el_a = ""
el_b = ""
cont = 1

print("Entre com os elementos do conjunto A: (escreva SAIR para encerrar): ")
while el_a != "SAIR" and el_a != "sair":
    el_a = str(input("Elemento #{}: ".format(cont)))
    if el_a == "SAIR" and el_a == "sair":
        break
    elif el_a != "SAIR" and el_a != "sair":
        list_A.append(el_a)
        list_A_B.append(el_a)
    cont += 1

cont = 1
print("Entre com os elementos do conjunto B: (escreva SAIR para encerrar): ")
while el_b != "SAIR" and el_b != "sair":
    el_b = str(input("Elemento #{}: ".format(cont)))
    if el_b == "SAIR" and el_b == "sair":
        break
    elif el_b != "SAIR" and el_b != "sair":
        list_B.append(el_b)
        list_A_B.append(el_b)
    cont += 1

print("\n\nA - B: ")
# for el in range(len(list_A_B)):
#     if el == 0:
#         arm = list_A_B[0]
#     else:
#         arm = list_A_B[el - 1]
#     for n in list_A:
#         for m in list_B:
#             if list_A_B[el] == n and list_A_B[el] != m and list_A_B[el] != arm:
#                 print(list_A_B[el])
cont_a = 0
cont_b = 0
for el in list_A_B:
    while cont_a < len(list_A):
        while cont_b < len(list_B):
            if el == list_A[cont_a] and el != list_B[cont_b]:
                print(el)
        cont_b += 1
    cont_a += 1


cont = 0
print("\n\nB - A: ")
for n in list_B:
    if n != list_A[cont]:
        print(n)
        cont += 1