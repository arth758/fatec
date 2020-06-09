# Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a
# média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.

size = 10
medias = []
nota = 0.0
media = 0.0
cont_media = 0

for n in range(size):
    print("ALUNO {}".format(n + 1))
    print("Entre com a ")
    nota1 = float(input("\tPRIMERIA nota: "))
    nota2 = float(input("\tSEGUNDA nota: "))
    nota3 = float(input("\tTERCEIRA nota: "))
    nota4 = float(input("\tQUARTA nota: "))
    print("\n")
    media = (nota1 + nota2 + nota3 + nota4) / 4
    medias.append(media)
    if media >= 7:
        cont_media += 1

print("\nO número de alunos com média superior ou igual a 7 é:\n\t{}".format(cont_media))