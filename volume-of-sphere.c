#include <stdio.h>
#include <math.h>

int main() {
    float r, v;

    printf("Enter radius of the sphere: ");
    scanf("%f", &r);

    v = (4.0f / 3.0f) * M_PI * r * r * r;

    printf("The volume of the sphere is %f cubic units.\n", v);

    return 0;
}
