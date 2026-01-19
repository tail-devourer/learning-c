#include <stdio.h>

int main() {
    int i;

    printf("Enter wind speed in knots: ");
    scanf("%d", &i);

    if ((1 <= i) && (i <= 3)) {
        printf("Calm");
    } else if ((4 <= i) && (i <= 27)) {
        printf("Breeze");
    } else if ((28 <= i) && (i <= 47)) {
        printf("Gale");
    } else if ((48 <= i) && (i <= 63)) {
        printf("Storm");
    } else if (i > 63) {
        printf("Hurricane");
    } else {
        printf("Please note that values under 1 are not supported.");
    }

    printf("\n");
}
