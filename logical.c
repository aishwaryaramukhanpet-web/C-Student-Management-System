#include <stdio.h>

int main() {
    int age = 20;

    // && -> AND: age is adult AND not old
    if (age >= 18 && age <= 60) {
        printf("Eligible for job\n");
    }

    // || -> OR: age is too young OR too old
    if (age < 18 || age > 60) {
        printf("Not eligible\n");
    } else {
        printf("Eligible\n");
    }

    // ! -> NOT: opposite
    if (!(age < 18)) {
        printf("You are not a child\n");
    }

    return 0;
}