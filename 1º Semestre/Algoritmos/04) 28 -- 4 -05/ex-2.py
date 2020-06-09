# Agora usando listas, indique como um troco deve ser dado utilizando-se um número mínimo de
# notas. Seu algoritmo deve ler o valor da conta a ser paga e o valor do pagamento efetuado
# desprezando os centavos. Suponha que as notas para troco sejam as de 50, 20, 10, 5, 2 e 1
# reais, e que nenhuma delas esteja em falta no caixa.

vetor = [0] * 9
# valor pago
vetor[0] = int(input("Entre com o valor pago: "))
# valor da conta
vetor[1] = int(input("Entre com o valor da conta: "))
# valor do troco
vetor[2] = vetor[0] - vetor[1]

# cont 50
vetor[3] = 0
# cont 20
vetor[4] = 0
# cont 10
vetor[5] = 0
# cont 5
vetor[6] = 0
# cont 2
vetor[7] = 0
# cont 1
vetor[8] = 0


while vetor[2] >= 50:
    vetor[2] -= 50
    vetor[3] += 1
while vetor[2] >= 20:
    vetor[2] -= 20
    vetor[4] += 1
while vetor[2] >= 10:
    vetor[2] -= 10
    vetor[5] += 1
while vetor[2] >= 5:
    vetor[2] -= 5
    vetor[6] += 1
while vetor[2] >= 2:
    vetor[2] -= 2
    vetor[7] += 1
while vetor[2] >= 1:
    vetor[2] -= 1
    vetor[8] += 1

print("O Troco será dado em: ")
print("\t", vetor[3], " notas de 50")
print("\t", vetor[4], " notas de 20")
print("\t", vetor[5], " notas de 10")
print("\t", vetor[6], " notas de 5")
print("\t", vetor[7], " notas de 2")
print("\t", vetor[8], " notas de 1")
print("No total de: ", vetor[0] - vetor[1])