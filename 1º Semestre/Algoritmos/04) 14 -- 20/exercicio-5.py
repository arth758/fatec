print("Salário\n\n")

c = ""
n = 0.0
e = 0.0
val_n = 0.0
val_e = 0.0

print("Entre com o código do funcionário: ")
c = str(input())
print("Entre com o número de horas trabalhadas: ")
n = float(input())

if n > 50:
    e = n - 50
    val_e = e * 20
    val_n = 50 * 10
else:
    e = 0
    val_n = n * 10

print("Valor do salário total: ", val_n)
if e > 0:
    print("Valor excedente do salário: ", val_e)
