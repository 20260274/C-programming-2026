#include <stdio.h>

int main(void) {
    int score = 75;
    int attendance = 85;

    int passed = score >= 60 && attendance >= 80;

    if (passed == 1) {
        printf("passed = %d -> 합격\n", passed);
    } else {
        printf("passed = %d -> 불합격\n", passed);
    }

    return 0;
}
