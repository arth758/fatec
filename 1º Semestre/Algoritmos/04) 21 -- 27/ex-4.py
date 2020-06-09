nome = str(input("Entre com seu nome: ")).upper()
for n in range(0, len(nome) + 1):
    print(nome[:n])