#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Nome, Idade, Sexo (M/F), CPF, Data de Nascimento,
//C�digo do Setor onde trabalha (0-99), Cargo que ocupa
//(string de at� 30 caracteres) e Sal�rio
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


    printf("-------Cadastro Ficha de Funcion�rio-------\n");

    printf("\nNome do Funcion�rio: ");
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

    printf("\nC�digo do Setor(0-99): ");
    fflush(stdin);
    scanf("%d", &func.setor);

    printf("\nCargo: ");
    fflush(stdin);
    gets(func.cargo);

    printf("\nSal�rio: ");
    scanf("%f", &func.salario);

    printf("\n-------Ficha do Funcion�rio-------\n");
    printf("\nNome do Funcion�rio: %s", func.nome);
    printf("\nIdade: %d", func.idade);
    printf("\nSexo: %c", func.sexo);
    printf("\nCPF: %s", func.cpf);
    printf("\nData de Nascimento: %s", func.data_nasc);
    printf("\nC�digo do Setor: %d", func.setor);
    printf("\nCargo: %s", func.cargo);
    printf("\nSal�rio: %.2f", func.salario);
}




