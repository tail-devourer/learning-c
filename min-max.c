#include <stdio.h>

double min(unsigned int n, double ar[]) {
    double res = ar[0];

    for (unsigned int i=1; i<n; i++) {
        if (ar[i] < res) {
            res = ar[i];
        }
    }

    return res;
}

double max(unsigned int n, double ar[]) {
    double res = ar[0];

    for (unsigned int i=1; i<n; i++) {
        if (ar[i] > res) {
            res = ar[i];
        }
    }

    return res;
}

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

    printf("Min = %lf\n", min(n, ar));
    printf("Max = %lf\n", max(n, ar));

    return 0;
}
