#include <stdio.h>

int main(){
/*  int a = 10;
  float b = 15.5;
  char c = 's';

  printf("Puedo mandar muchos parametros: %i %.1f %c\n", a,b,c);
*/

  int a;
  float b;
  char c;
  char x[50];
  //para que el usuario pueda incorporar variables usamos la sig funcion:
  printf("Digite el valor entero de la variable a: ");
  scanf("%i", &a);
  printf("El valor de a es: %i\n\n", a);

  printf("Digite el valor flotante de la variable b: ");
  scanf("%f", &b);
  printf("El valor de b es: %.2f\n\n", b);

  printf("Digite el valor caracter de la variable c:");
  scanf("%c", &c);
  printf("El valor de c es: %c\n\n", c);

  printf("Digite su nombre y apellido: ");
  gets (x);
  printf("Hola %s\n", x);
  return 0;
}
