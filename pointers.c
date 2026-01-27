#include <stdio.h>

int main() {
    int i, *p;

    p = &i;
    i = 10;

    printf("%d\n", *p);

    return 0;
}
