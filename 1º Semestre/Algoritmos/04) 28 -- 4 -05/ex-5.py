# Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e
# os números.

vetor = []
soma = 0
mult = 1
print("Entre com 5 números inteiros: ")
for n in range(5):
    num = int(input("\tNúmero #{}: ".format(n + 1)))
    vetor.append(num)

for n in vetor:
    soma += n
    mult *= n

print("\nVetor: {}\nSoma: {}\nMultiplicação: {}".format(vetor, soma, mult))