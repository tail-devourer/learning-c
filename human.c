#include <stdio.h>

// struct Human {
typedef struct {
    const char* name;
    int age;
    char sex;
    double bank_amount;
// };
} Human;

int main() {
    // struct Human human1 = { "Nick", 26, 'M', 10000.0 };
    Human human1 = { "Nick", 26, 'M', 10000.0 };
    Human human2 = human1;

    printf("%s | %d%c | $%lf\n", human1.name, human1.age, human1.sex, human1.bank_amount);
    printf("%s | %d%c | $%lf\n", human2.name, human2.age, human2.sex, human2.bank_amount);

    human1.bank_amount = 13000.0;
    human2.name = "Jack";

    printf("%s | %d%c | $%lf\n", human1.name, human1.age, human1.sex, human1.bank_amount);
    printf("%s | %d%c | $%lf\n", human2.name, human2.age, human2.sex, human2.bank_amount);

    return 0;
}
