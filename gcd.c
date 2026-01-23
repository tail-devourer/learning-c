#include <stdio.h>

int main() {
    int a, b, t;

    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        t = a;
        a = b;
        b = t;
    }

    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }

    printf("GCD = %d\n", a);

    return 0;
}
