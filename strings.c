#include <stdio.h>
#include <string.h>

int main() {
    char s[256];

    printf("Please enter a string.\n");
    // scanf("%s", s);
    fgets(s, sizeof(s), stdin);

    printf("The length of the string is %ld\n", strlen(s) - 1);

    return 0;
}
