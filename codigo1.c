#include <stdio.h>
int main() {
 int numero;
 printf("Ingrese un número: ");
 scanf("%d", &numero);
 if (numero > 18) {
 printf("El número es mayor a 18.\n");
 } else if (numero < 0) {
 printf("El número es menor a 18.\n");
 } else {
 printf("El número es 18.\n");
 }
 return 0;
}
