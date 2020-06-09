print("Entre com três números para Alice, Beto e Clara(0 ou 1): ")
n1, n2, n3 = input().split()

n1 = int(n1)
n2 = int(n2)
n3 = int(n3)

if n1 != 0 and n1 != 1 or n2 != 0 and n2 != 1 or n3 != 0 and n3 != 1:
    print("Entre com números Válidos!")

elif n1 != n2 and n1 != n3:
    print("A")

elif n2 != n1 and n2 != n3:
    print("B")

elif n3 != n1 and n3 != n2:
    print("C")

elif n1 == n2 and n2 == n3:
    print("*")