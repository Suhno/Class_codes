#include <stdio.h>
int main() {
char se;
   printf("Do you want to add?")
   scanf("%s", &se)
     if (se == y) {
    int num1, num2;
    float ans;
    printf("First number: ");
    scanf("%s", &num1);
    printf("Second number: ");
    scanf("%s", &num2);
    ans= num1 + num2
    printf("The result is: %f", &ans);
   } else {
     printf("Error.\n");
   }
return 0;
}
