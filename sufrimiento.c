#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5;

    printf("Cinco numeros separados por espacios: ");     // Solicitar cinco números
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5) { // Cual de los números es el maximo usando if y else if
        printf("El maximo es: %d\n", num1);   // Si num1 es el max, dice el valor de num1
    } else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5) {
        printf("El maximo es: %d\n", num2); // Si num2 es el max, dice el valor de num2
    } else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5) {
        printf("El maximo es: %d\n", num3);
    } else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5) {
        printf("El maximo es: %d\n", num4);
    } else {
        printf("El maximo es: %d\n", num5); //Si no se cumplen las anteriores, el max es 5
    }

    return 0;
}
