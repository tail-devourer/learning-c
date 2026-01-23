#include <stdio.h>

int main() {
    int n;
    float t, e = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        t = 1;

        for (int j=2; j<=i; j++) {
            t *= j;
        }

        e += 1/t;
    }

    printf("e = %f\n", e);

    return 0;
}
