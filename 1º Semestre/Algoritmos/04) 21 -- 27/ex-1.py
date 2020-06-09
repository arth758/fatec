print("Tamanho de Strings\n")

string_1 = str(input("Entre com uma palavra qualquer: "))
string_2 = str(input("Entre com outra palavra qualquer: "))

tamanho_1 = string_1.__len__()
tamanho_2 = string_2.__len__()

print("\nTamanho de ", string_1, ": ", tamanho_1)
print("Tamanho de ", string_2, ": ", tamanho_2)

print("\n")
if tamanho_1 == tamanho_2:
    print("As strings são de tamanhos iguais!")
else:
    print("As strings são de tamanhos diferentes!")
if string_1 == string_2:
    print("As strings são iguais!")
else:
    print("As strings são diferentes!")