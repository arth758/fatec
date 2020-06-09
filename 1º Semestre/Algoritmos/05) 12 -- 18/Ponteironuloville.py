escrita_ivl = open('tel_invalidos.out', 'w')
escrita = open('tel_validos.out', 'w')
contatos = open('telefones.txt')
numeros_invalidos = []
numeros_validos = []
num_string = []
cont_dig = 0
total_1 = 0
total_2 = 0
soma = 0
cont = 1
aux = 0

for linha in contatos:
    num_string.append(linha.split())

for linha in num_string:
    for telefone in linha:
        total_1 += 1
        for digito in range(6):
            if telefone[digito] != telefone[digito - 1]:
                cont_dig += 1
                if cont_dig > 6:
                    cont_dig = 0
                    if telefone[0] != telefone[-1]:
                        aux = int(telefone)
                        while aux:
                            soma += aux % 10
                            aux //= 10
                        if soma % 2 == 0:
                            soma = 0
                            cont += 1
                            escrita.writelines('{}\n'.format(telefone))
                            total_2 += 1
                            numeros_validos.append(telefone)
                        else:
                            soma = 0
            else:
                cont_dig = 0

escrita.writelines('\n{}|{}'.format(total_1, total_2))
for linha in num_string:
    for telefone in linha:
        if telefone not in numeros_validos:
            escrita_ivl.writelines('{}\n'.format(telefone))

contatos.close()
escrita.close()
escrita_ivl.close()

print('Números Verificados: ', total_1)
print('Números Válidos: ', total_2)
print('Números Inválidos: ', total_1 - total_2)
