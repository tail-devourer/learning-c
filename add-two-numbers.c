#include <stdio.h>

int main() {
    float x, y;

    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter second number: ");
    scanf("%f", &y);

    printf("The sum of %f and %f is %f.\n", x, y, x+y);

    return 0;
}
