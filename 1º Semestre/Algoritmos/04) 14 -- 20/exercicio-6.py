print("Valor de tinta gasto\n\n")

raio = 0.0
altura = 0.0
area_base = 0.0
area_lat = 0.0
area_total = 0.0
cont_litros = 0
cont_latas = 0

print("Entre com a altura e raio do cilindro: ")
altura = float(input())
raio = float(input())

area_base = 3.14 * (raio ** 2)
area_lat = 2 * 3.14 * raio * altura
area_total = (2 * area_base) + area_lat

while area_total > 0:
    area_total -= 3
    cont_litros += 1

while cont_litros > 0:
    cont_litros -= 5
    cont_latas += 1

print("Custo: ", cont_latas * 50, "\nQuantidade de latas cheias: ", cont_latas)