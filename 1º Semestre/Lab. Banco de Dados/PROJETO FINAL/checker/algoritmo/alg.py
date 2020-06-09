import sys
resultado = open('resultado.txt', 'w')
digitos = ('0', '1', '2', '3', '4', '5', '6', '7', '8', '9')
alfabeto = {'A': 1, 'B': 2, 'C': 3, 'D': 4, 'E': 5, 'F': 6, 'G': 7, 'H': 8,
            'I': 9, 'J': 10, 'L': 11, 'M': 12, 'N': 13, 'O': 14, 'P': 15}
J1, J2 = open('jogador1.txt'), open('jogador2.txt')
barcos_J1, torpedos_J1, torpedos_J1_1, posicoes_J1, posicoes_J1_1, posicoes_J1_2 = [], [], [], [], [], []
PONTUACAO_TOTAL_J1, ALVOS_ACERTADOS_J1, ALVOS_ERRADOS_J1, contn = 0, 0, 0, 0
def esta_na_lista(x, y, jogador_atual):
    if int(x) > 15 or int(y) > 15:
        resultado.write(jogador_atual + ' ERROR_POSITION_NONEXISTENT_VALIDATION')
        sys.exit()
def repeticao(lista, cont):
    for barco_1 in lista:
        for barco_2 in lista:
            for elemento_1 in barco_1:
                for elemento_2 in barco_2:
                    if elemento_1 == elemento_2:
                        cont += 1
    return cont
def overwrite(cont, jogador_atual, maximo):
    if cont > maximo:
        error_overwrite(jogador_atual)
def error_overwrite(jogador_atual):
    resultado.write(jogador_atual + ' ERROR_OVERWRITE_PIECES_VALIDATION')
    sys.exit()
def error_nr_parts(jogador_atual):
    resultado.write(jogador_atual + ' ERROR_NR_PARTS_VALIDATION')
    sys.exit()
for linha in J1:
    if not linha.startswith('#'):
        barcos_J1.append(linha[:-1].split('|')) if linha.endswith('\n') else barcos_J1.append(linha.split('|'))
    else:
        J1_rd = J1.read()
        torpedos_J1 = J1_rd[2:].split('|')
if not len(barcos_J1[0]) < 6 or not len(barcos_J1[1]) < 3 or not len(barcos_J1[2]) < 11 \
        or not len(barcos_J1[3]) < 6 or not len(torpedos_J1) < 26:
    error_nr_parts('J1')
for barco in barcos_J1:
    for posicao in barco:
        if len(posicao) == 6:
            if posicao[0] in digitos:
                if posicao[1] == ';':
                    x = posicao[2]
                    y1 = posicao[3]
                    y2 = posicao[4]
                    y = y1 + y2
                    d = posicao[5]
                    index = posicao[0]
        elif len(posicao) == 5:
            if posicao[0] in digitos:
                if posicao[1] == ';':
                    x = posicao[2]
                    y = posicao[3]
                    d = posicao[4]
                    index = posicao[0]
        elif len(posicao) == 4:
            if posicao[0] in digitos:
                if posicao[1] == ';':
                    x = posicao[2]
                    y = posicao[3]
                    index = posicao[0]
                    d = ''
            else:
                x = posicao[0]
                y1 = posicao[1]
                y2 = posicao[2]
                y = y1 + y2
                d = posicao[3]
        elif len(posicao) == 3:
            x = posicao[0]
            y = posicao[1]
            d = posicao[2]
            if d in digitos:
                y += d
                d = ''
        elif len(posicao) == 2:
            x = posicao[0]
            y = posicao[1]
            d = ''
        x = str(x)
        x = x.upper()
        if x in alfabeto:
            x = alfabeto[x]
            x = int(x)
            y = int(y)
        else:
            x = 17
        posicoes_J1.append(str(index) + ' ' + str(x) + ' ' + str(y) + ' ' + str(d.upper()))
for elemento in posicoes_J1:
    if elemento[0] == '1':
        if elemento[-1] == 'V':
            posicoes = elemento[2:].split(' ')
            posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[0] = int(posicoes[0])
            cont = 1
            while cont < 4:
                posicoes[0] += 1
                posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J1_1.append('|')
        elif elemento[-1] == 'H':
            posicoes = elemento[2:].split(' ')
            posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[1] = int(posicoes[1])
            cont = 1
            while cont < 4:
                posicoes[1] += 1
                posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J1_1.append('|')
    elif elemento[0] == '2':
        if elemento[-1] == 'V':
            posicoes = elemento[2:].split(' ')
            posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[0] = int(posicoes[0])
            cont = 1
            while cont < 5:
                posicoes[0] += 1
                posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J1_1.append('|')
        elif elemento[-1] == 'H':
            posicoes = elemento[2:].split(' ')
            posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[1] = int(posicoes[1])
            cont = 1
            while cont < 5:
                posicoes[1] += 1
                posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J1_1.append('|')
    elif elemento[0] == '3':
        posicoes = elemento[2:].split(' ')
        posicoes.pop(2)
        posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
        posicoes_J1_1.append('|')
    elif elemento[0] == '4':
        if elemento[-1] == 'V':
            posicoes = elemento[2:].split(' ')
            posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[0] = int(posicoes[0])
            cont = 1
            while cont < 2:
                posicoes[0] += 1
                posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J1_1.append('|')
        elif elemento[-1] == 'H':
            posicoes = elemento[2:].split(' ')
            posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[1] = int(posicoes[1])
            cont = 1
            while cont < 2:
                posicoes[1] += 1
                posicoes_J1_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J1_1.append('|')
for posicao_1 in posicoes_J1_1:
    for posicao_2 in posicoes_J1_1:
        if posicao_1 != '|' or posicao_2 != '|':
            if posicao_1 == posicao_2:
                contn += 1
overwrite(contn, 'J1', 50)
posicoes_J1_1.pop(-1)
for posicao in posicoes_J1_1:
    if posicao != '|':
        x, y = posicao.split('.')
        esta_na_lista(x, y, 'J1')
for torpedo in torpedos_J1:
    if torpedo[0] == 'T' or torpedo[1] == ';':
        if len(torpedo) == 4:
            x = torpedo[2]
            y = torpedo[3:]
        elif len(torpedo) > 4:
            x = torpedo[2]
            y = torpedo[3:]
    else:
        x = torpedo[0]
        y = torpedo[1:]
    x = x.upper() if type(x) == str else error_nr_parts('J2')
    if x in alfabeto:
        x = alfabeto[x]
        torpedos_J1_1.append(str(x) + '.' + str(y))
    else:
        x = 17
    esta_na_lista(x, y, 'J1')
lista = ''.join(posicoes_J1_1)
lista = lista.split('|')
for barco in lista:
    barco = barco.split(' ')
    barco.pop(-1)
    posicoes_J1_2.append(barco)
overwrite(repeticao(posicoes_J1_2, 0), 'J1', 50)
barcos_J2, torpedos_J2, torpedos_J2_1, posicoes_J2, posicoes_J2_1, posicoes_J2_2 = [], [], [], [], [], []
PONTUACAO_TOTAL_J2, ALVOS_ACERTADOS_J2, ALVOS_ERRADOS_J2, contn = 0, 0, 0, 0
for linha in J2:
    if not linha.startswith('#'):
        barcos_J2.append(linha[:-1].split('|')) if linha.endswith('\n') else barcos_J2.append(linha.split('|'))
    else:
        J2_rd = J2.read()
        torpedos_J2 = J2_rd[2:].split('|')
if not len(barcos_J2[0]) < 6 or not len(barcos_J2[1]) < 3 or not len(barcos_J2[2]) < 11 \
        or not len(barcos_J2[3]) < 6 or not len(torpedos_J2) < 26:
    error_nr_parts('J2')
for barco in barcos_J2:
    for posicao in barco:
        if len(posicao) == 6:
            if posicao[0] in digitos:
                if posicao[1] == ';':
                    x = posicao[2]
                    y1 = posicao[3]
                    y2 = posicao[4]
                    y = y1 + y2
                    d = posicao[5]
                    index = posicao[0]
        elif len(posicao) == 5:
            if posicao[0] in digitos:
                if posicao[1] == ';':
                    x = posicao[2]
                    y = posicao[3]
                    d = posicao[4]
                    index = posicao[0]
        elif len(posicao) == 4:
            if posicao[0] in digitos:
                if posicao[1] == ';':
                    x = posicao[2]
                    y = posicao[3]
                    index = posicao[0]
                    d = ''
            else:
                x = posicao[0]
                y1 = posicao[1]
                y2 = posicao[2]
                y = y1 + y2
                d = posicao[3]
        elif len(posicao) == 3:
            x = posicao[0]
            y = posicao[1]
            d = posicao[2]
            if d in digitos:
                y += d
                d = ''
        elif len(posicao) == 2:
            x = posicao[0]
            y = posicao[1]
            d = ''
        x = str(x)
        x = x.upper()
        if x in alfabeto:
            x = alfabeto[x]
            x = int(x)
            y = int(y)
        else:
            x = 17
        posicoes_J2.append(str(index) + ' ' + str(x) + ' ' + str(y) + ' ' + str(d.upper()))
for elemento in posicoes_J2:
    if elemento[0] == '1':
        if elemento[-1] == 'V':
            posicoes = elemento[2:].split(' ')
            posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[0] = int(posicoes[0])
            cont = 1
            while cont < 4:
                posicoes[0] += 1
                posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J2_1.append('|')
        elif elemento[-1] == 'H':
            posicoes = elemento[2:].split(' ')
            posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[1] = int(posicoes[1])
            cont = 1
            while cont < 4:
                posicoes[1] += 1
                posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J2_1.append('|')
    elif elemento[0] == '2':
        if elemento[-1] == 'V':
            posicoes = elemento[2:].split(' ')
            posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[0] = int(posicoes[0])
            cont = 1
            while cont < 5:
                posicoes[0] += 1
                posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J2_1.append('|')
        elif elemento[-1] == 'H':
            posicoes = elemento[2:].split(' ')
            posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[1] = int(posicoes[1])
            cont = 1
            while cont < 5:
                posicoes[1] += 1
                posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J2_1.append('|')
    elif elemento[0] == '3':
        posicoes = elemento[2:].split(' ')
        posicoes.pop(2)
        posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
        posicoes_J2_1.append('|')
    elif elemento[0] == '4':
        if elemento[-1] == 'V':
            posicoes = elemento[2:].split(' ')
            posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[0] = int(posicoes[0])
            cont = 1
            while cont < 2:
                posicoes[0] += 1
                posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J2_1.append('|')
        elif elemento[-1] == 'H':
            posicoes = elemento[2:].split(' ')
            posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
            posicoes[1] = int(posicoes[1])
            cont = 1
            while cont < 2:
                posicoes[1] += 1
                posicoes_J2_1.append(str(posicoes[0]) + '.' + str(posicoes[1]) + ' ')
                cont += 1
            posicoes_J2_1.append('|')
for posicao_1 in posicoes_J2_1:
    for posicao_2 in posicoes_J2_1:
        if posicao_1 != '|' or posicao_2 != '|':
            if posicao_1 == posicao_2:
                contn += 1
overwrite(contn, 'J2', 50)
posicoes_J2_1.pop(-1)
for posicao in posicoes_J2_1:
    if posicao != '|':
        x, y = posicao.split('.')
        esta_na_lista(x, y, 'J2')
for torpedo in torpedos_J2:
    if torpedo[0] == 'T' or torpedo[1] == ';':
        if len(torpedo) == 4:
            x = torpedo[2]
            y = torpedo[3:]
        elif len(torpedo) > 4:
            x = torpedo[2]
            y = torpedo[3:]
    else:
        x = torpedo[0]
        y = torpedo[1:]
    x = x.upper() if type(x) == str else error_nr_parts('J2')
    if x in alfabeto:
        x = alfabeto[x]
        torpedos_J2_1.append(str(x) + '.' + str(y))
    else:
        x = 17
    esta_na_lista(x, y, 'J2')
lista = ''.join(posicoes_J2_1)
lista = lista.split('|')
for barco in lista:
    barco = barco.split(' ')
    barco.pop(-1)
    posicoes_J2_2.append(barco)
overwrite(repeticao(posicoes_J2_2, 0), 'J2', 50)
for barco in posicoes_J1_2:
    for torpedo in torpedos_J2_1:
        if torpedo in barco:
            index = barco.index(torpedo)
            barco.pop(index)
            if not barco:
                PONTUACAO_TOTAL_J2 += 5
                ALVOS_ACERTADOS_J2 += 1
            else:
                PONTUACAO_TOTAL_J2 += 3
ALVOS_ERRADOS_J2 = len(posicoes_J1_2) - ALVOS_ACERTADOS_J2
for barco in posicoes_J2_2:
    for torpedo in torpedos_J1_1:
        if torpedo in barco:
            index = barco.index(torpedo)
            barco.pop(index)
            if not barco:
                PONTUACAO_TOTAL_J1 += 5
                ALVOS_ACERTADOS_J1 += 1
            else:
                PONTUACAO_TOTAL_J1 += 3
ALVOS_ERRADOS_J1 = len(posicoes_J2_2) - ALVOS_ACERTADOS_J1
if PONTUACAO_TOTAL_J1 > PONTUACAO_TOTAL_J2:
    resultado.write('J1 ' + str(ALVOS_ACERTADOS_J1) + 'AA ' + str(ALVOS_ERRADOS_J1)
                    + 'AE ' + str(PONTUACAO_TOTAL_J1) + 'PT ')
elif PONTUACAO_TOTAL_J2 > PONTUACAO_TOTAL_J1:
    resultado.write('J2 ' + str(ALVOS_ACERTADOS_J2) + 'AA ' + str(ALVOS_ERRADOS_J2)
                    + 'AE ' + str(PONTUACAO_TOTAL_J2) + 'PT ')
elif PONTUACAO_TOTAL_J1 == PONTUACAO_TOTAL_J2:
    resultado.write('J1 ' + str(ALVOS_ACERTADOS_J1) + 'AA ' + str(ALVOS_ERRADOS_J1) + 'AE '
                    + str(PONTUACAO_TOTAL_J1) + 'PT \n' + 'J2 ' + str(ALVOS_ACERTADOS_J2) +
                    'AA ' + str(ALVOS_ERRADOS_J2) + 'AE ' + str(PONTUACAO_TOTAL_J2) + 'PT ')
J1.close(), J2.close(), resultado.close()