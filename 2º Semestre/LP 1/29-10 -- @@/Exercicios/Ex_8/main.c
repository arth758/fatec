#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Nome, Idade, Sexo (M/F), CPF, Data de Nascimento,
//Código do Setor onde trabalha (0-99), Cargo que ocupa
//(string de até 30 caracteres) e Salário
int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct ficha_funcionario
    {
        char nome[40];
        int idade;
        char sexo;
        char cpf[12];
        char data_nasc[11];
        int setor;
        char cargo[30];
        float salario;
    };
    struct ficha_funcionario func;


    printf("-------Cadastro Ficha de Funcionário-------\n");

    printf("\nNome do Funcionário: ");
    fflush(stdin);
    gets(func.nome);

    printf("\nIdade: ");
    fflush(stdin);
    scanf("%d", &func.idade);

    printf("\nSexo (F/M): ");
    fflush(stdin);
    scanf("%c",&func.sexo);

    printf("\nCPF: ");
    fflush(stdin);
    gets(func.cpf);

    printf("\nData de Nascimento: ");
    fflush(stdin);
    gets(func.data_nasc);

    printf("\nCódigo do Setor(0-99): ");
    fflush(stdin);
    scanf("%d", &func.setor);

    printf("\nCargo: ");
    fflush(stdin);
    gets(func.cargo);

    printf("\nSalário: ");
    scanf("%f", &func.salario);

    printf("\n-------Ficha do Funcionário-------\n");
    printf("\nNome do Funcionário: %s", func.nome);
    printf("\nIdade: %d", func.idade);
    printf("\nSexo: %c", func.sexo);
    printf("\nCPF: %s", func.cpf);
    printf("\nData de Nascimento: %s", func.data_nasc);
    printf("\nCódigo do Setor: %d", func.setor);
    printf("\nCargo: %s", func.cargo);
    printf("\nSalário: %.2f", func.salario);
}




