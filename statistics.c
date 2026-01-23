#include <stdio.h>

int main() {
    unsigned int n;

    printf("Enter n: ");
    scanf("%u", &n);

    if (n == 0) {
        return 0;
    }

    double ar[n];

    for (unsigned int i=0; i<n; i++) {
        printf("Enter ar[%u]: ", i);
        scanf("%lf", &ar[i]);
    }

    double sum = 0;

    for (unsigned int i=0; i<n; i++) {
        sum += ar[i];
    }

    printf("Sum = %lf\n", sum);

    double mean = sum / n;

    printf("Mean = %lf\n", mean);

    return 0;
}
