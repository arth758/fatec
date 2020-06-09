# Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a soma dos
# quadrados dos elementos do vetor.

size = 10
vetor_A = []

for n in range(size):
    print("Número #{}".format(n + 1))
    num = int(input())
    vetor_A.append(num**2)

print("\nSoma do quadrado dos elementos do vetor: {}".format(sum(vetor_A)))