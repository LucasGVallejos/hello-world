#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416 //Macro

int y = 5; //variable global, cualquier funcion puede usar esta variable.

int main() {
  int x = 10; //variable local, solo la funcion Main puede usarla.

//  int suma = 0;// defino a mi variable "suma" como  Entero (INT)
  float suma = 0; //defino a mi variable "suma" como Flotante (float)
  suma = PI + x;

  //printf("La suma es: %i\n", suma);
  /* Como paso por parámetro mi numero entero "suma", debo explicitar en mi
  comando printf(); que recibe un parametro de tipo int. Esto lo hago con %i
  o con %d.
  */

  printf("La suma es: %.3f \n", suma);
  /* Como paso por parámetro mi numero flotante "suma", debo explicitar en mi
  comando printf(); que recibe un parametro de tipo float. Esto lo hago con %f.

  Si deseo recortar los decimales utilizo un %.nf donde n corresponde a la cantidad
  */

  return 0;
}
