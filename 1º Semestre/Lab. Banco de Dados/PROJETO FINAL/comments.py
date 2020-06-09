# for navio in barcos_J1:
#     for posicao in navio:
#         if posicao.upper().endswith('V') and posicao not in posicoes_V_J1:
#             posicoes_V_J1.append(posicao)
#         elif posicao.upper().endswith('H') and posicao not in posicoes_H_J1:
#             posicoes_H_J1.append(posicao)
#         elif posicao.endswith(digitos) and posicao not in posicoes_SUB_J1:
#             posicoes_SUB_J1.append(posicao)

# for navio in barcos_J2:
#     for posicao in navio:
#         if posicao.upper().endswith('V')and posicao not in posicoes_V_J2:
#             posicoes_V_J2.append(posicao)
#         elif posicao.upper().endswith('H') and posicao not in posicoes_H_J2:
#             posicoes_H_J2.append(posicao)
#         elif posicao.endswith(digitos) and posicao not in posicoes_SUB_J2:
#             posicoes_SUB_J2.append(posicao)

# print(len(posicoes_V_J1), posicoes_V_J1)
# print(len(posicoes_H_J1), posicoes_H_J1)
# print(len(posicoes_SUB_J1), posicoes_SUB_J1)
# print(len(torpedos_J1), torpedos_J1)
# print(len(posicoes_V_J2), posicoes_V_J2)
# print(len(posicoes_H_J2), posicoes_H_J2)
# print(len(posicoes_SUB_J2), posicoes_SUB_J2)
# print(len(torpedos_J2), torpedos_J2)
# print(barcos_J2)

# if flag:
#     for barco in barcos_J1:
#         for posicao in barco:
#             print(posicao)
#             x = posicao[0]
#             y = int(posicao[1])
#             if len(posicao) > 2:
#                 d = posicao[2]
#             elif len(posicao) <= 4 and len(posicao) > 2:
#                 aux = posicao[3]
#             else:
#                 d = ''
#             if type(y) == int or type(d) == int:
#                 y = str(y) + d
#                 d = aux
#             print(x, y, d, aux)
#             if x in alfabeto:
#                 x = alfabeto[x]

# while cont_linha < 1:
#     while cont_ele <= 1:
#         posicoes_J2_2.append([])
#         for barcos in posicoes_J2_1:
#             lista.append(barcos)
#         posicoes_J2_2[cont].append(lista)
#         cont += 1
#         cont_ele += 1
#     cont_linha += 1
# cont = 0
# cont_1 = 0
# while cont_linha < 6:
#     while cont_ele < 4:
#         posicoes_J2_2.append([])
#         # cont_1 = 0
#         for barcos in posicoes_J2_1:
#             if cont_1 <= 4:
#                 cont_1 += 1
#                 posicoes_J2_2[cont].append(barcos)
#             elif cont_1 > 4 and cont_1 <= 8:
#                 cont_1 += 1
#                 posicoes_J2_2[cont].append(barcos)
#             elif cont_1 > 8 and cont_1 <= 12:
#                 cont_1 += 1
#                 posicoes_J2_2[cont].append(barcos)
#             elif cont_1 > 12 and cont_1 <= 16:
#                 cont_1 += 1
#                 posicoes_J2_2[cont].append(barcos)
#
#         cont += 1
#         cont_ele += 1
#     cont_linha += 1
# print(posicoes_J2_2)

# while cont_linha < 1:
#     while cont_ele <= 1:
#         posicoes_J2_2.append([])
#         for barcos in posicoes_J2_1:
#             lista.append(barcos)
#         posicoes_J2_2[cont].append(lista)
#         cont += 1
#         cont_ele += 1
#     cont_linha += 1
