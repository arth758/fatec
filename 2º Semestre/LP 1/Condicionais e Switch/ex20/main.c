#include <stdio.h>
#include <stdlib.h>

int main()
{
    ex20();
    return(0);
}

void ex20()
{
    int a, b, c;

      printf ("Informe o lado 1 do triangulo: ");
      scanf ("%d", &a);
      printf ("Informe o lado 2 do triangulo: ");
      scanf ("%d", &b);
      printf ("Informe o lado 3 do triangulo: ");
      scanf ("%d", &c);

      if (a + b >= c && a + c >= b && b + c >= a)
         {
          if (a == b && b == c && c == a){
             printf ("Triangulo Equilatero");
             }
          else if (a == b || b == c || c == a){
             printf ("Triangulo Isosceles");
             }
          else if (a != b && b != c && c != a){
             printf ("Triangulo Escaleno");
             }
         }
      else
          printf ("Valores inválidos para formar um triangulo");

}
