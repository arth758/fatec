print("Celsius para Fahrenheit\n\n")

cel = 0.0
fah = 0.0

print("Entre com a temperatura em Celsius: ")
cel = float(input())

fah = (cel * (9 / 5) + 32)

print("Temperatura em Fahrenheit: ", round(fah, 1))