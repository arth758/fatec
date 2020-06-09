#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "exercícios.h"

int main()
{
    printf("Exercicios !\n");

    int op;
    printf("Escolha o exercício desejado(1 ao 40): ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    case 5:
        ex5();
        break;
    case 6:
        ex6();
        break;
    case 7:
        ex7();
        break;
    case 8:
        ex8();
        break;
    case 9:
        ex9();
        break;
    case 10:
        ex10();
        break;
    case 11:
        ex11();
        break;
    case 12:
        ex12();
        break;
    case 13:
        ex13();
        break;
    case 14:
        ex14();
        break;
    case 15:
        ex15();
        break;
    case 16:
        ex16();
        break;
    case 17:
        ex17();
        break;
    case 18:
        ex18();
        break;
    case 19:
        ex19();
        break;
    case 20:
        ex20();
        break;
    case 21:
        ex21();
        break;
    case 22:
        ex22();
        break;
    case 23:
        ex23();
        break;
    case 24:
        ex24();
        break;
    case 25:
        ex25();
        break;
    case 26:
        ex26();
        break;
    case 27:
        ex27();
        break;
    case 28:
        ex28();
        break;
    case 29:
        ex29();
        break;
    case 30:
        ex30();
        break;
    case 31:
        ex31();
        break;
    case 32:
        ex32();
        break;
    case 33:
        ex33();
        break;
    case 34:
        ex34();
        break;
    case 35:
        ex35();
        break;
    case 36:
        ex36();
        break;
    case 37:
        ex37();
        break;
    case 38:
        ex38();
        break;
    case 39:
        ex39();
        break;
    case 40:
        ex40();
        break;
    default:
    printf("Opção não diponivel!");
    }
    return 0;
}
