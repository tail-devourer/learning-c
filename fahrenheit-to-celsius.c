#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main() {
    float f, c;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &f);

    c = (f - FREEZING_PT) * SCALE_FACTOR;

    printf("The Celsius equivalent is %f.\n", c);

    return 0;
}
