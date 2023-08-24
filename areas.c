#include <stdio.h>
#include <stdlib.h>

int main () {
int h, b, area;
    printf ("base? ");
    scanf ("%d", &b);
    printf ("height? ");
    scanf ("%d", &h);
    area=b*h;
    printf ("Area= %d", area);
    return 0;
}
