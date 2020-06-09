print("Mergulhadores\n\n")

list_n = []

n_ent, n_sai = input("Entre com o número de mergulhadores que entraram e o númerode que saíram: ").split()
print("Entre com o número dos mergulhadores que sairam: ")
while n < n_sai:
    n = int(input())
    list_n  .append(n)

n_ent = int(n_ent)
n_sai = int(n_sai)

if n_ent == n_sai:
    print("*")

elif n_sai < n_ent:
    print()