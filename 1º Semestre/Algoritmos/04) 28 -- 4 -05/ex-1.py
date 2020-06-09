# Leia um vetor de 10 elementos e calcule o maior e o menor valor

lista = []
n = 0

while n < 10:
    el = int(input("Entre com um elemento: "))
    lista.append(el)
    n += 1

print("Maior elemento: ", max(lista))
print("Menor elemento: ", min(lista))