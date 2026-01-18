#include <stdio.h>

int main() {
    int amount;

    printf("Enter dollar amount: ");
    scanf("%d", &amount);

    printf("$100 bills: %d\n", amount / 100);
    amount %= 100;

    printf(" $50 bills: %d\n", amount / 50);
    amount %= 50;

    printf(" $20 bills: %d\n", amount / 20);
    amount %= 20;

    printf(" $10 bills: %d\n", amount / 10);
    amount %= 10;

    printf("  $5 bills: %d\n", amount / 5);
    amount %= 5;

    printf("  $1 bills: %d\n", amount / 1);
    amount %= 1;

    return 0;
}
