#include <stdio.h>

int main() {
    int i;

    printf("Enter numerical grade: ");
    scanf("%d", &i);

    i /= 10;

    switch (i) {
        case 10: printf("A"); break;
        case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break;
        default: printf("F");
    }

    printf("\n");

    return 0;
}
