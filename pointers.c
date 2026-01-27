#include <stdio.h>

int main() {
    int i, *p;

    p = &i;
    i = 10;

    printf("i = %d\n", *p);

    int ar[10] = {12, 24, 36, 48, 60, 72, 84, 96, 108, 120}, *q;

    q = &ar[0];

    printf("ar[6] = %d\n", *(q+6));

    return 0;
}
