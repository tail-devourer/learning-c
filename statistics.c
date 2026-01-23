#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    double ar[n];

    for (int i=0; i<n; i++) {
        printf("Enter ar[%d]: ", i);
        scanf("%lf", &ar[i]);
    }

    double sum = 0;

    for (int i=0; i<n; i++) {
        sum += ar[i];
    }

    printf("Sum = %lf\n", sum);

    double mean = sum / n;

    printf("Mean = %lf\n", mean);

    return 0;
}
