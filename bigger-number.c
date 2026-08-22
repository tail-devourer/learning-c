#include <stdio.h>

#define MAX(a,b) (a > b ? a : b)

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("%f is the bigger number.", MAX(a,b));

    return 0;
}
