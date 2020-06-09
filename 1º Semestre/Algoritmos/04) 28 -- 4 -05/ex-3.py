# Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os
# números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.

tamanho = 20
VETOR = []
PAR = []
IMPAR = []

for n in range(tamanho):
    EL = int(input("Entre com um número inteiro: "))
    VETOR.append(EL)
    if EL % 2 == 0:
        PAR.append(EL)
    elif EL % 2 != 0:
        IMPAR.append(EL)

print("Vetor Total: ", VETOR)
print("Vetor Par: ", PAR)
print("Vetor Impar: ", IMPAR)