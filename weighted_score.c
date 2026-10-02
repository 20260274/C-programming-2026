define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main(void) {
    int midterm, final, assignment;
    double weighted_score;

    scanf("%d %d %d", &midterm, &final, &assignment);

    weighted_score = midterm * 0.3 + final * 0.4 + assignment * 0.3;


    printf("weighted_score=%.2f\n", weighted_score);

    return 0;
}