#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n;
    float j;

    printf("Enter n: ");
    scanf("%d", &n);

    float* ar;
    ar = malloc(sizeof(ar) * n);

    printf("Checking pre-existing values (malloc): ");
    for (unsigned int i=0; i<n; i++) {
        printf(":%f:", ar[i]);
    }
    printf("\n");

    free(ar);

    ar = calloc(n, sizeof(ar));

    printf("Checking pre-existing values (calloc): ");
    for (unsigned int i=0; i<n; i++) {
        printf(":%f:", ar[i]);
    }
    printf("\n");

    for (unsigned int i=0; i<n; i++) {
        printf("Enter ar[%d]: ", i);
        scanf("%f", &j);

        ar[i] = j;

        printf("ar[%d]: %f\n", i, ar[i]);
    }

    printf("Total: ");

    double sum = 0;
    for (unsigned int i=0; i<n; i++) {
        sum += ar[i];
    }

    printf("%lf\n", sum);

    free(ar);

    return 0;
}
