#include <stdio.h>
int main() {
 char selc;
 printf("Quieres haccer una suma y/n")
 scanf("%s", &selc)
 if (selc == y) {
  int num1, num2;
  float ans;
  printf("Ingrese el primer numero: ");
  scanf("%s", &num1);
  printf("Ingrese el segundo numero: ");
  scanf("%s", &num2);
  ans= num1 + num2
  printf("el resultado es %f", &ans);
 } else {
 printf("Error.\n");
 }
 return 0;
}
