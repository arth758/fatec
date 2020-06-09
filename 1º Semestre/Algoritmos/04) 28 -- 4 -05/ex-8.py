#. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20
# elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros
# vetores.

size = 10
vet1 = []
vet2 = []
vet3 = []
flag = True

print("Vetor A: ")
for n in range(size):
    print("\tElemento #{}".format(n + 1))
    el = input("\t\t")
    vet1.append(el)

print("Vetor B: ")
for n in range(size):
    print("\tElemento #{}".format(n + 1))
    el = input("\t\t")
    vet2.append(el)

for n in range(size):
    if flag == True:
        vet3.append(vet1[n])

for n in range(size):
    if flag == False:
        vet3.append(vet2[n])


print(vet3)