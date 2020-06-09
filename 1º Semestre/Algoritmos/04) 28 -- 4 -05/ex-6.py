# Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no
# seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.

size = 5
alturas = []
idades = []

for n in range(size):
    print("PESSOA #{}".format(n + 1))
    print("Entre com sua ")
    alt = float(input("\tALTURA: "))
    idd = int(input("\tIDADE: "))
    alturas.append(alt)
    idades.append(idd)

print("\n")
for n in range(size - 1, -1, -1):
    print("ALTURA: {}\t IDADE: {}".format(alturas[n], idades[n]))