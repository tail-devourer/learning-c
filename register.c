#include <stdio.h>

union {
    unsigned char au;
    unsigned short ax;
    unsigned int eax;
    unsigned long long rax;
} r1;

int main() {
    r1.rax = 8461085571ll;

    printf("au = %hhu\n", r1.au);
    printf("ax = %hu\n", r1.ax);
    printf("eax = %u\n", r1.eax);
    printf("rax = %llu\n", r1.rax);

    return 0;
}
