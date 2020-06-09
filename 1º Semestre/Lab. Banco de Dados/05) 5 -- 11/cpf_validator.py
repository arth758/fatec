print("Validação de CPF\n")

cpf_op1 = []
soma_cpf = 0
soma_cpf_2 = 0
cpf_op2 = []
soma_val_cpf = 0
soma_val_cpf_2 = 0
flag = True

print("Selecione uma opção: \n\t1-Calcular dígitos de controle\n\t2-Verificar a validade do CPF")
op = int(input("Opção: "))

if op == 1:
    print("Calculadora de dígitos de controle...")
    print("Entre com 9 dígitos do CPF:")
    for n in range(9):
        cpf_el = int(input("Número #{}: ".format(n + 1)))
        cpf_op1.append(cpf_el)
    for n in range(9):
        soma_cpf += cpf_op1[n] * (n + 1)
    dig_controle_1 = soma_cpf % 11
    cpf_op1.append(dig_controle_1)
    for n in range(10):
        soma_cpf_2 += cpf_op1[n] * n
    dig_controle_2 = soma_cpf_2 % 11
    cpf_op1.append(dig_controle_2)
    print(cpf_op1[0] + cpf_op1[1])
    print(cpf_op1[0], cpf_op1[1], cpf_op1[2], ".", cpf_op1[3], cpf_op1[4], cpf_op1[5], ".", cpf_op1[6], cpf_op1[7], cpf_op1[8], "-", cpf_op1[9], cpf_op1[10])
elif op == 2:
    print("Validação do CPF...")
    print("Entre com 11 dígitos do CPF:")
    for n in range(11):
        cpf_el = int(input("Número #{}: ".format(n + 1)))
        cpf_op2.append(cpf_el)
    for n in range(9):
        soma_val_cpf += cpf_op2[n] * (n + 1)
    dig_controle_1 = soma_val_cpf % 11
    for n in range(10):
        soma_val_cpf_2 += cpf_op2[n] * n
    dig_controle_2 = soma_val_cpf_2 % 11
    if dig_controle_1 == cpf_op2[9] and dig_controle_2 == cpf_op2[10]:
        flag = True
    else:
        flag = False
    if flag == True:
        print("CPF Verdadeiro!")
        print(cpf_op2[0] + cpf_op2[1])
    else:
        print("CPF não verdadeiro!")
        print(cpf_op2[0] + cpf_op2[1])
