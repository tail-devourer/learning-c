#include <stdio.h>

int main() {
    int length = 10;
    int width = 15;
    int height = 4;

    int volume = length * width * height;

    printf("Length: %d, Width: %d, Height: %d, Volume: %d\n", length, width, height, volume);

    float income = 3000.000f;
    float spending = 2560.545f;

    float leftover = income - spending;

    printf("%.2f (Income) - %.2f (Spending) = %.2f (Leftover)\n", income, spending, leftover);

    return 0;
}
