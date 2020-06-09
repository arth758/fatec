# print(9 ** (1/2))

# x = 568
# print("X: %d" %x)

# x = 0
# while x < 15:
#     print(x)
#     x += 1
#     if x == 5:
#         continue
# print("Acabou!")

# texto = str(input("Entre com qlqr coisa: "))
# tamanho = texto.__len__()
# print(tamanho)
# print(texto[::-1])

# teste = "ABFKRNHPGMEHAHCGNRHSHZNQEMVPROTHGAÇ"
# print(teste)
# teste = list(teste)
# print(teste)
# el_a = teste.index("A")
# print(el_a)
# teste.sort(reverse=True)
# print(teste)
# teste.extend("A")
# teste.reverse()
# print(teste)
# el_a = teste.count("A")
# print(el_a)

# lista = ["0"] * 10
# print(lista)

# palavra = 'Teste'
# if len(palavra) > 3:
#     palavra += 'ing'
# print(palavra[-1:])
# print(palavra)inteiro = '0123456789'
# # print(inteiro[-1])

# n = int(input())
# s = 0
# while n:
#     s += n % 10 # Soma `s` ao ultimo numeral de `n`
#     n //= 10 # Remove o ultimo numero de `n`
# print(s)

# arquivo = open('arquivo.txt', 'w')
# for linha in range(1, 101):
#     arquivo.write('{}\n'.format(linha))
# arquivo.close()

# teste = '0123456789'
# print(teste[-1])

# print(10 // 6)

# exemplo = open('arquivo.txt')
# print(exemplo.read())

# linha = '1;A1V|A2V|A3V|A4V|A5V\n'
# print(linha[2:-2], 'teste')

# texto = 'socorram me subi no onibus em marrocos'
# print(texto)
# print(texto[::-1])

# def épar(x):
#     return x % 2 == 0
# x = 16
# print(épar(x))

# import string
# for chr in string.ascii_uppercase:
#     print(chr)

# lista = [[1, 1, 3, 4, 5, 6, 7, 8, 9, 10], [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]]
# cont = 0
# for barco in lista:
#     for el_1 in barco:
#         for el_2 in barco:
#             if el_1 == el_2:
#                 print(el_1, el_2)
#                 cont += 1
#     print()
# print(cont)

# x = 0
# def fat(x):
#     if x == 1:
#         return 1
#     else:
#         return x * fat(x-1)
# x = int(input())
# print(fat(x))

# n = 0
# def fibonacci(n):
#     if n <= 1:
#         return n
#     else:
#         return fibonacci(n - 2) + fibonacci(n - 1)
# n = int(input())
# print(fibonacci(n))

# n = 555
# cont_2 = 0
# for x in range(n - 1):
#     str_x = str(x)
#     if len(str_x) == 3:
#         if str_x[0] == '2':
#             cont_2 += 1
#         if str_x[1] == '2':
#             cont_2 += 1
#         if str_x[2] == '2':
#             cont_2 += 1
#     elif len(str_x) == 2:
#         if str_x[0] == '2':
#             cont_2 += 1
#         if str_x[1] == '2':
#             cont_2 += 1
#     elif len(str_x) == 1:
#         if str_x == '2':
#             cont_2 += 1
# print(cont_2)
