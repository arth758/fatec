print("Distancia\n\n")

p_a = 0
p_b = 0

q_a = 0
q_b = 0

dist = 0

print("Ponto P: Eixo X:")
p_a = int(input())
print("Ponto P: Eixo Y:")
p_b = int(input())

print("Ponto Q: Eixo X:")
q_a = int(input())
print("Ponto Q: Eixo Y:")
q_b = int(input())

dist = (((q_a - p_a) ** 2) + ((q_b - p_b) ** 2)) ** (1/2)


print("A distância é aproximadamente: ", round(dist, 3))