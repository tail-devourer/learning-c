#include <stdio.h>

typedef enum {CLUBS, DIAMONDS, HEARTS, SPADES} Suit;

const char* _[] = {
    [CLUBS] = "CLUBS",
    [DIAMONDS] = "DIAMONDS",
    [HEARTS] = "HEARTS",
    [SPADES] = "SPADES"
};

int main() {
    Suit s1 = HEARTS;

    printf("%s\n", _[s1]);
    printf("%s\n", _[CLUBS]);

    return 0;
}
