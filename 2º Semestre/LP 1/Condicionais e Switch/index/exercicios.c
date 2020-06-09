#include <stdio.h>
#include <locale.h>
#include "exercícios.h"

void ex1()
{
    int a, b;
    printf("Informe os numeros:\n");
    scanf("%i%i", &a, &b);
    if (a == b)
    {
        printf("os dois numeros sao iguais\n");
    }
    else if (a > b)
    {
        printf("\n%i eh o maior numero e %i eh o menor numero\n", a, b);
    }
    else
    {
        printf("\n%i o menor numero e %i o maior numero\n", a, b);
    }

    return 0;
}
void ex2()
{
    float num, raiz;
    printf("informe um número: ");
    scanf("%f", &num);
    if (num >= 0)
    {
        raiz = sqrt(num);
        printf("Raiz: %f", raiz);
    }
    else
    {
        printf("numero inválido!");
    }
}
void ex3()
{
    float a;
    printf("Informe um número real: ");
    scanf("%f", &a);
    if (a > 0)
    {
        printf("Raiz quadrada de %f = %f\n", a, sqrtf(a));
    }
    else
    {
        printf("%f * 2 = %f\n", a, a * a);
    }
    return 0;
}
void ex4()
{
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("%d Elevado ao quadrado é: %f\n", x, pow(x, 2));
    printf("Raiz quadrada de %d é: %f\n", x, sqrt(x));
    return 1;
}
void ex5()
{
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Número Par");
    }
    else
    {
        printf("Número ímpar");
    }
}
void ex6()
{
    int a, b;
    printf("Informe os dois números: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d é maior que %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d é maior que %d\n", b, a);
    }
    else
    {
        printf("São iguais\n");
    }
    printf("Diferença: %d - %d = %d\n", a, b, a - b);
    return 0;
}
void ex7()
{
    setlocale(LC_ALL, "Portuguese");
    int primeiro;
    int segundo;
    printf("Primeiro número: ");
    scanf("%i", &primeiro);
    printf("Segundo número: ");
    scanf("%i", &segundo);

    if (primeiro > segundo)
    {
        printf("\n O maior número digitado foi o ");
        printf("%i", primeiro);
        printf("\n");
    }
    else if (primeiro < segundo)
    {
        printf("\n O Maior número digitado foi o ");
        printf("%i", segundo);
        printf("\n");
    }
    else if (primeiro == segundo)
    {
        printf("\nNúmeros iguais");
        printf("\n");
    }
    return 0;
}
void ex8()
{
    float n1, n2, soma;
    float media;

    printf("informe duas notas\n");
    scanf("%f %f", &n1, &n2);

    if (n1 >= 0.0 && n1 <= 10.0)
    {
        if (n2 >= 0.0 && n2 <= 10.0)
        {

            soma = n1 + n2;
            printf("A soma das Notas e %.1f\n", soma);

            media = soma / 2;
            printf("A media e %.1f\n", media);
        }
    }
    else
    {
        printf("Nota inválida");
    }

    return 0;
}
void ex9()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, prestacao;

    printf("Informe seu salário: ");

    scanf("%f", &salario);

    printf("Informe o valor da prestação: ");

    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2)

    {

        printf("Empréstimo não Concedido!");
    }

    else

    {

        printf("Empréstimo Concedido!");
    }
}
void ex10()
{
    char sexo;
    float h;
    float peso;

    printf("Informe seu sexo: ");
    scanf("%c", &sexo);
    printf("Iforme a sua altura: ");
    scanf("%f", &h);
    if (sexo == "M" || "m")
    {
        peso = (72.7 * h) - 58;
    }
    else

    {
        peso = (62.1 * h) - 44.7;
    }
    printf("O seu peso ideal é %0.1f", peso);
}
void ex11()
{
    int n, aux = 0;

    printf("Informe um número inteiro: ");
    scanf("%i", &n);

    if (n > 0)
    {
        while (n > 0)
        {
            aux = aux + n % 10;
            n = n / 10;
        }
        printf("\nA soma dos algarismos é: %i", aux);
    }
    else
    {
        printf("\nNúmero Inválido!");
    }
}
void ex12()
{
    int num;
    float logaritmo = 0;

    printf("Insira um número: ");
    scanf("%i", &num);

    if (num < 0)
    {
        printf("\nO número não pode ser negativo!");
    }
    else
    {
        logaritmo = log(num);
        printf("\nLogaritmo do número: %f", logaritmo);
    }
}
void ex13()
{
    float n1, n2, n3, media;

    printf("Insira a primeira nota do aluno ");
    scanf("%f", &n1);
    printf("Insira a segunda nota do aluno ");
    scanf("%f", &n2);
    printf("Insira a teceira nota do aluno ");
    scanf("%f", &n3);

    media = ((n1 + n2) + (n3 * 2)) / 5;

    if (media >= 6)
    {
        printf("Aluno Aprovado");
    }
    else
    {
        printf("Aluno Reprovado");
    }
}
void ex14()
{
    float trablab, avalsem, exfinal, mediafinal;
    printf("\nNota Final estudante");
    printf("\nQual a nota do Trabalho de Laboratório: ");
    scanf("%f", &trablab);
    printf("\nQual a nota da Avaliação Semestral: ");
    scanf("%f", &avalsem);
    printf("\nQual a nota do Exame Final: ");
    scanf("%f", &exfinal);
    if (trablab > 10 || trablab < 0 || avalsem < 0 || avalsem > 10 || exfinal < 0 || exfinal > 10)
    {
        printf("\nA nota não pode ser maior que 10 ou menor que 0");
    }
    else
    {
        mediafinal = (trablab * 2 + avalsem * 3 + exfinal * 5) / 10;
        printf("\nMédia Final: %.1f", mediafinal);
        if (mediafinal < 3)
        {
            printf("\nVocê está REPROVADO!");
        }
        else if (mediafinal < 5)
        {
            printf("\nVocê está de RECUPERAÇÃO!");
        }
        else
        {
            printf("\nVocê foi APROVADO!");
        }
    }
}
void ex15()
{
    int op;
    printf("Dias da Semana!");
    printf("\nDigite um número de 1 a 7:\n");
    scanf("%i", &op);
    switch (op)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terça-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sábado");
        break;
    default:
        printf("Número Inválido");
        break;
    }
}
void ex16()
{
    int op;
    printf("Meses do Ano!");
    printf("\nDigite um número de 1 a 12:\n");
    scanf("%i", &op);
    switch (op)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Número Inválido");
        break;
    }
}
void ex17()
{
    float basemaior, basemenor, altura, area;
    printf("Área de um Trapézio\n");
    printf("Informe a base maior: \n");
    scanf("%f", &basemaior);
    printf("Informe a base menor: \n");
    scanf("%f", &basemenor);
    printf("Informe a altura: \n");
    scanf("%f", &altura);
    if (basemaior <= 0 || basemenor <= 0)
    {
        printf("\nAs bases não podem ser 0 ou menores");
        exit(0);
    }
    area = ((basemaior + basemenor) * altura) / 2;
    printf("A área do trapézio é: %.1f", area);
}
void ex18()
{
    float adicao(result)
    {
        float a, b;
        printf("Informe o valor de A: ");
        scanf("%f", &a);
        printf("Informe o valor de B: ");
        scanf("%f", &b);
        result = a + b;
        return (result);
    }

    float subtracao(result)
    {
        float a, b;
        printf("Informe o valor de A: ");
        scanf("%f", &a);
        printf("Informe o valor de B: ");
        scanf("%f", &b);
        result = a - b;
        return (result);
    }

    float multiplicacao(result)
    {
        float a, b;
        printf("Informe o valor de A: ");
        scanf("%f", &a);
        printf("Informe o valor de B: ");
        scanf("%f", &b);
        result = a * b;
        return (result);
    }

    float divisao(result)
    {
        float a, b;
        printf("Informe o valor de A: ");
        scanf("%f", &a);
        printf("Informe o valor de B: ");
        scanf("%f", &b);
        result = a / b;
        return (result);
    }
    int op;
    float result;
    printf("Operações Matemáticas\n");
    printf("1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n\nEscolha uma opção: ");
    scanf("%i", &op);
    switch (op)
    {
    case 1:
        printf("O resultado da soma dos valores é: %.1f", result = adicao());
        break;
    case 2:
        printf("O resultado da subtração dos valores é: %.1f", result = subtracao());
        break;
    case 3:
        printf("O resultado da multiplicação dos valores é: %.1f", result = multiplicacao());
        break;
    case 4:
        printf("O resultado da divisão dos valores é: %.1f", result = divisao());
        break;
    default:
        printf("\nOpção inválida!");
        break;
    }
}
void ex19()
{
    int num, var3, var5;
    printf("\nInforme um número inteiro: ");
    scanf("%i", &num);
    var3 = num % 3;
    var5 = num % 5;
    if (var3 == 0)
    {
        printf("\nNúmero divisível por 3");
    }
    else if (var5 == 0)
    {
        printf("\nNúmero divisível por 5");
    }
}
void ex20()
{
    int a, b, c;
    printf("Informe o lado 1 do triangulo: ");
    scanf("%d", &a);
    printf("Informe o lado 2 do triangulo: ");
    scanf("%d", &b);
    printf("Informe o lado 3 do triangulo: ");
    scanf("%d", &c);
    if (a + b >= c && a + c >= b && b + c >= a)
    {
        if (a == b && b == c && c == a)
        {
            printf("Triangulo Equilatero");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Triangulo Isosceles");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Triangulo Escaleno");
        }
    }
    else
    {
        printf("Valores inválidos para formar um triangulo");
    }
}
void ex21()
{
    int op;
    float n1, n2, result;

    printf("\n---MENU---");
    printf("\n\n---ESCOLHA UMA OPÇÃO---");
    printf("\n1- Soma de 2 números");
    printf("\n2- Diferença entre 2 números (maior pelo menor)");
    printf("\n3- Produto entre 2 números");
    printf("\n4- Divisão entre 2 números (o denominador não pode ser zero)");
    printf("\n");
    scanf("%i", &op);

    switch (op)

    {
    case 1:
        printf("\nInforme o valor do 1º número: ");
        scanf("%f", &n1);
        printf("\nInforme o valor do 2º número: ");
        scanf("%f", &n2);

        printf("\nO resultado é: %.1f", n1 + n2);
        break;

    case 2:
        printf("\nInforme o valor do 1º número: ");
        scanf("%f", &n1);
        printf("\nInforme o valor do 2º número: ");
        scanf("%f", &n2);

        if (n1 > n2)
        {
            printf("\nO número %.1f é maior que %.1f", n1, n2);
        }
        else if (n2 > n1)
        {
            printf("\nO número %.1f é maior que %.1f", n2, n1);
        }
        else
        {
            printf("\nO número %.1f é igual a %.1f", n1, n2);
        }
        break;

    case 3:
        printf("\nInforme o valor do 1º número: ");
        scanf("%f", &n1);
        printf("\nInforme o valor do 2º número: ");
        scanf("%f", &n2);

        printf("\nO produto é: %.1f", n1 * n2);
        break;

    case 4:
        printf("\nInforme o valor do numerador: ");
        scanf("%f", &n1);
        printf("\nInforme o valor do denominador: ");
        scanf("%f", &n2);

        if (n2 == 0)
        {
            printf("\nO denominador não pode ser 0");
        }
        else
        {
            printf("\nO resultado é: %.1f", n1 / n2);
        }
        break;

    default:
        printf("\nOpção inválida");
        break;
    }
}
void ex22()
{
    int id, tp;
    printf("Exercicio 22!!\n");
    printf("\nEntre com sua idade ");
    scanf("%d", &id);
    printf("\nEntre com sua idade e tempo de trabalho, respectivamente.");
    scanf("%d", &tp);
    if (id >= 65 || tp >= 30)
    {
        printf("Ele pode aposentar!");
    }
    else
    {
        if (id >= 60 && tp >= 25)
        {
            printf("Ele pode aposentar!");
        }
        else
        {
            printf("Ele ainda não pode aposentar!");
        }
    }
}
void ex23()
{
    int ano;
    setlocale(LC_ALL, ("Portuguese"));
    printf("Exercicio 23!");
    printf("Entre com um ano.\n");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
    {
        printf("É ano bissexto!");
    }
    else
    {
        printf("Não é ano bissexto!");
    }
}
void ex24()
{
    float valor;
    int op;
    setlocale(LC_ALL, "Portuguese");
    printf("Exercicio 24!\n");

    while (op != 0)
    {
        printf("Entre com o valor do produto.\n");
        scanf("%f", &valor);

        printf("Escolha um estado\n1-SP\n2-MG\n3-RJ\n4-MS\n");
        scanf("%d", &op);
        if (op == 1)
        {
            valor = valor + (valor * 12) / 100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else if (op == 2)
        {
            valor = valor + (valor * 7) / 100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else if (op == 3)
        {
            valor = valor + (valor * 15) / 100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else if (op == 4)
        {
            valor = valor + (valor * 8) / 100;
            printf("O valor a ser pago é: %f \n", valor);
        }
        else
        {
            printf("Entre com um valor válido!\n");
        }
    }
}
void ex25()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Equacao de 2 Grau\n");

    float a, b, c, x1, x2, delta;

    printf("Entre com o valor para A: "); /*2*/
    scanf("%f", &a);
    printf("Entre com o valor para B: "); /*3*/
    scanf("%f", &b);
    printf("Entre com o valor para C: "); /*3*/
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0)
    {
        printf("Delta menor que 0!");
        exit(0);
    }

    delta = sqrt(delta);

    x1 = ((-b) + (delta)) / (2 * a);
    x2 = ((-b) - (delta)) / (2 * a);

    printf("\nValor de X1 e X2: %f e %f", x1, x2);
}
void ex26()
{
    int distancia, gasolina, consumo;
    printf("Entre com a distancia em Km: ");
    scanf("%d", &distancia);

    printf("Entre com a quantidade de combustivel gasta: ");
    scanf("%d", &gasolina);

    consumo = distancia / gasolina;

    if (consumo < 8)
    {
        printf("Venda o carro!!");
    }
    else if (consumo >= 8 && consumo <= 14)
    {
        printf("Econômico!!");
    }
    else
    {
        printf("Super econômico!!!!!!!!!!");
    }
}
void ex27()
{
    int idade;
    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Infantil A");
    }
    else if (idade > 7 && idade <= 10)
    {
        printf("Infantil B");
    }
    else if (idade > 10 && idade <= 13)
    {
        printf("Juvenil A");
    }
    else if (idade > 13 && idade <= 17)
    {
        printf("Juvenil B");
    }
    else
    {
        printf("Senior");
    }
}
void ex28()
{
    int x, y, z, op;
    float result;
    printf("Entre com o valor de x: \n");
    scanf("%d", &x);

    printf("Entre com o valor de y  \n");
    scanf("%d", &y);

    printf("Entre com o valor de z: \n");
    scanf("%d", &z);

    printf("1- Geometria\n2- Ponderada\n3- Harmonica\n4- Aritmetica\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        result = cbrt(x * y * z);
        printf("%f", result);
        break;
    case 2:
        result = ((z + 2) * (y + 3) * (z + 4)) / 6;
        printf("%f", result);
        break;
    case 3:
        result = 3 / ((1 / x) + (1 / y) + (1 / z));
        printf("%f", result);
        break;
    case 4:
        result = (x + y + z) / 3;
        printf("%f", result);
        break;
    }
}
void ex29()
{
    int a, b, nota, resultado, i;
    nota = 0;
    for (i = 0; i < 5; i++)
    {
        a = rand() % 100;
        b = rand() % 100;
        printf("\n Qual a soma de %d + %d \n", a, b);
        scanf("%d", &resultado);
        if ((a + b) == resultado)
        {
            nota += 2;
            printf("Acertou");
        }
        else
        {
            printf("BURRÃO resposta : %d", a + b);
        }
    }
    printf("\n Sua nota é %d", nota);
}
void ex30()
{
    int a, b, c;
    printf("Entre com primeiro numero:\n");
    scanf("%d", a);
    printf("Entre com segundo numero:\n");
    scanf("%d", b);
    printf("Entre com terceiro numero:\n");
    scanf("%d", c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("Ordem Crescente : \n %d \n %d \n %d", a, b, c);
        }
        else
        {
            printf("Ordem Crescente : \n %d \n %d \n %d", a, c, b);
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            printf("Ordem Crescente : \n %d \n %d \n %d", b, a, c);
        }
        else
        {
            printf("Ordem Crescente : \n %d \n %d \n %d", b, c, a);
        }
    }
    else
    {
        if (b > a)
        {
            printf("Ordem Crescente : \n %d \n %d \n %d", c, b, a);
        }
        else
        {
            printf("Ordem Crescente : \n %d \n %d \n %d", c, a, b);
        }
    }
}
void ex31()
{
    int peso, altura;
    peso = 0;
    altura = 0;
    printf("Entre com o seu peso\n");
    scanf("%d", &peso);
    printf("Entre com o sua altura em cm\n");
    scanf("%d", &altura);
    if (peso < 60)
    {
        if (altura < 120)
        {
            printf("\nA");
        }
        else if (altura >= 120 && altura <= 170)
        {
            printf("\nB");
        }
        else
        {
            printf("\nC");
        }
    }
    else if (peso >= 60 && peso <= 90)
    {
        if (altura < 120)
        {
            printf("\nD");
        }
        else if (altura >= 120 && altura == 170)
        {
            printf("\nE");
        }
        else
        {
            printf("\nF");
        }
    }
    else
    {

        if (altura < 120)
        {
            printf("\nG");
        }
        else if (altura >= 120 && altura <= 170)
        {
            printf("\nH");
        }
        else
        {
            printf("\nI");
        }
    }
}
void ex32()
{
    int codigo, qtd;
    double preco;
    preco = 0;
    printf("Entre com o codigo do produto\n");
    scanf("%d", &codigo);
    printf("Entre com a quantidade\n");
    scanf("%d", &qtd);
    switch (codigo)
    {
    case 100:
        preco = 1.2;
        break;
    case 101:
        preco = 1.3;
        break;
    case 102:
        preco = 1.5;
        break;
    case 103:
        preco = 1.2;
        break;
    case 104:
        preco = 1.7;
        break;
    case 105:
        preco = 2.2;
        break;
    case 106:
        preco = 1;
        break;
    }
    printf("\n%f", preco);
    printf("\nvalor a pagar é : %0.1f", preco * qtd);
}
void ex33()
{
    int preco;
    float valor;
    printf("Entre com o valor sem desconto \n");
    scanf("%d", &preco);
    if (preco < 50)
    {
        valor = preco - (preco * 0.05);
    }
    else if (preco >= 50 && preco <= 100)
    {
        valor = preco - (preco * 0.10);
    }
    else
    {
        valor = preco - (preco * 0.15);
    }
    printf("valor com desconto é : %f", valor);
}
void ex34()
{
    int faltas;
    float nota;

    printf("Entre com a quantidade de faltas\n");
    scanf("%d", &faltas);

    printf("Entre com a nota do aluno\n");
    scanf("%f", &nota);

    if (faltas <= 20)
    {
        if (nota >= 9 && nota <= 10)
        {
            printf("Seu conceito é A");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("Seu conceito é B");
        }
        else if (nota >= 5 && nota <= 7.4)
        {
            printf("Seu conceito é C");
        }
        else if (nota >= 4 && nota <= 4.9)
        {
            printf("Seu conceito é D");
        }
        else
        {
            printf("Seu conceito é E");
        }
    }
    else
    {

        if (nota >= 9 && nota <= 10)
        {
            printf("Seu conceito é B");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("Seu conceito é C");
        }
        else if (nota >= 5 && nota <= 7.4)
        {
            printf("Seu conceito é D");
        }
        else if (nota >= 4 || nota <= 4.9)
        {
            printf("Seu conceito é E");
        }
        else
        {
            printf("Seu conceito é E");
        }
    }
}
void ex35()
{
    printf("Exercício 35\n");

    int dia, mes, ano, bissexto;
    printf("Entre com uma data, separada por barra: ");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    if (dia > 0 && dia < 31)
    {
        if (mes > 0 && mes < 13)
        {
            if ((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0))
            {
                bissexto = 1;
            }
            else
            {
                bissexto = 0;
            }
            if (mes == 2)
            {
                if (bissexto == 1)
                {
                    if (dia > 0 && dia < 30)
                    {
                        printf("Data válida!\n");
                    }
                    else
                    {
                        printf("Data inválida!\n");
                    }
                }
                else
                {
                    if (dia > 0 && dia < 29)
                    {
                        printf("Data válida!\n");
                    }
                    else
                    {
                        printf("Data inválida!\n");
                    }
                }
            }
            else
            {
                if (dia > 0 && dia < 31)
                {
                    printf("Data válida!\n");
                }
                else
                {
                    printf("Data inválida!\n");
                }
            }
        }
        else
        {
            printf("Data inválida!\n");
        }
    }
    else
    {
        printf("Data inválida!\n");
    }
}
void ex36()
{
    printf("Exercício 36\n");

    float valVenda, valFinal, valComissao, pctagem;

    printf("Entre com o valor da venda: ");
    scanf("%f", &valVenda);

    if (valVenda >= 100000)
    {
        pctagem = 0.16;
        valComissao = 700;
    }
    else if (valVenda >= 80000 && valVenda < 100000)
    {
        pctagem = 0.14;
        valComissao = 650;
    }
    else if (valVenda >= 60000 && valVenda < 80000)
    {
        pctagem = 0.14;
        valComissao = 600;
    }
    else if (valVenda >= 40000 && valVenda < 60000)
    {
        pctagem = 0.14;
        valComissao = 550;
    }
    else if (valVenda >= 20000 && valVenda < 40000)
    {
        pctagem = 0.14;
        valComissao = 500;
    }
    else if (valVenda < 20000)
    {
        pctagem = 0.14;
        valComissao = 400;
    }

    printf("\nValor a ser recebido: R$ %0.f,00", (valComissao + (valVenda * (pctagem))));
}
void ex37()
{
    printf("Exercicio 37\n");

    int horaEntrada, minutoEntrada, horaSaida, minutoSaida, diferencaHora, diferencaMinuto;
    float valTotal = 0;

    printf("Entre com a hora e minutos de entrada(separados por : ): ");
    scanf("%i:%i", &horaEntrada, &minutoEntrada);
    printf("Entre com a hora e minutos de saida(separados por : ): ");
    scanf("%i:%i", &horaSaida, &minutoSaida);

    diferencaHora = horaSaida - horaEntrada;
    if (diferencaHora < 0)
        diferencaHora *= -1;
    diferencaMinuto = minutoSaida - minutoEntrada;
    if (diferencaMinuto < 0)
        diferencaMinuto *= -1;

    if (diferencaMinuto > 0)
        diferencaHora++;

    if (diferencaHora > 0 && diferencaHora <= 2)
    {
        if (diferencaHora == 1)
        {
            valTotal += 1;
        }
        else if (diferencaHora == 2)
        {
            valTotal += 2;
        }
    }
    else if (diferencaHora > 2 && diferencaHora <= 4)
    {
        if (diferencaHora == 3)
        {
            valTotal += (2 + 1.40);
        }
        else if (diferencaHora == 4)
        {
            valTotal += (2 + 2.80);
        }
    }
    else if (diferencaHora > 4)
    {
        valTotal += (2 + 2.8);
        while (diferencaHora > 0)
        {
            valTotal += 2;
            diferencaHora--;
        }
    }

    printf("Valor a ser pago: %.2f", valTotal);
}
void ex38()
{
    printf("Exercicio 38\n");

    int dia, mes, ano, bissexto;
    const anoAtual = 2019;
    printf("Entre com uma data de nascimento, separada por barra: ");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    if (dia > 0 && dia < 31)
    {
        if (mes > 0 && mes < 13)
        {
            if (ano <= 2019)
            {
                if ((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0))
                {
                    bissexto = 1;
                }
                else
                {
                    bissexto = 0;
                }
                if (mes == 2)
                {
                    if (bissexto == 1)
                    {
                        if (dia > 0 && dia < 30)
                        {
                            printf("Data válida!\n");
                        }
                        else
                        {
                            printf("Data inválida!\n");
                        }
                    }
                    else
                    {
                        if (dia > 0 && dia < 29)
                        {
                            printf("Data válida!\n");
                        }
                        else
                        {
                            printf("Data inválida!\n");
                        }
                    }
                }
                else
                {
                    if (dia > 0 && dia < 31)
                    {
                        printf("Data válida!\n");
                    }
                    else
                    {
                        printf("Data inválida!\n");
                    }
                }
            }
            else
            {
                printf("Data inválida!\n");
            }
        }
        else
        {
            printf("Data inválida!\n");
        }
    }
    else
    {
        printf("Data inválida!\n");
    }
}
void ex39()
{
    printf("Exercicio 39\n");

    float salarioAtual, salarioFinal;
    int tempoServico, reajuste, bonus;

    printf("Entre com o salario do funcionario: ");
    scanf("%f", &salarioAtual);
    printf("Entre com o tempo de servico (em anos) do mesmo: ");
    scanf("%i", &tempoServico);

    if (salarioAtual <= 500)
    {
        reajuste = 0.25;
        if (tempoServico < 1)
        {
            bonus = 0;
        }
        else if (tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if (tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if (tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else if (salarioAtual > 500 && salarioAtual <= 1000)
    {
        reajuste = 0.2;
        if (tempoServico < 1)
        {
            bonus = 0;
        }
        else if (tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if (tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if (tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else if (salarioAtual > 1000 && salarioAtual <= 1500)
    {
        reajuste = 0.15;
        if (tempoServico < 1)
        {
            bonus = 0;
        }
        else if (tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if (tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if (tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else if (salarioAtual > 1500 && salarioAtual <= 2000)
    {
        reajuste = 0.1;
        if (tempoServico < 1)
        {
            bonus = 0;
        }
        else if (tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if (tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if (tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }
    else
    {
        reajuste = 0;
        if (tempoServico < 1)
        {
            bonus = 0;
        }
        else if (tempoServico >= 1 && tempoServico <= 3)
        {
            bonus = 100;
        }
        else if (tempoServico > 3 && tempoServico <= 6)
        {
            bonus = 200;
        }
        else if (tempoServico > 6 && tempoServico <= 10)
        {
            bonus = 300;
        }
        else
        {
            bonus = 500;
        }
    }

    salarioFinal = (salarioAtual + (salarioAtual * reajuste)) + bonus;

    printf("\nSalario final eh igual a R$%.2f\n", salarioFinal);
}
void ex40()
{
    printf("Exercicio 40\n");

    float valFabrica, valFinal, pctDistribuidor, pctImpostos;

    printf("Entre com o valor de fabrica do carro: ");
    scanf("%f", &valFabrica);

    if (valFabrica <= 12000)
    {
        pctDistribuidor = 0.05;
        pctImpostos = 0;
    }
    else if (valFabrica > 12000 && valFabrica <= 25000)
    {
        pctDistribuidor = 0.1;
        pctImpostos = 0.15;
    }
    else
    {
        pctDistribuidor = 0.15;
        pctImpostos = 0.2;
    }

    valFinal = (valFabrica + ((valFabrica * pctDistribuidor) + (valFabrica * pctImpostos)));
    printf("\nValor final do carro: R$%.2f\n", valFinal);
}
