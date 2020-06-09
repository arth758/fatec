print('Juros Simples\n')

c = float(input('Capital: '))
i = float(input('Taxa de empréstimo: '))
n = float(input('Períodos: '))

i = i / 100
juros = c * i * n

print('\nO valor de juros é: ', juros)
