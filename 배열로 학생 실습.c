#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int score[SIZE];
    int max, min;
    int sum = 0;
    double avg;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        score[i] = rand() % 101;
        sum += score[i];

        if (i == 0) {
            max = score[i];
            min = score[i];
        }

        if (score[i] > max) {
            max = score[i];
        }

        if (score[i] < min) {
            min = score[i];
        }
    }

    avg = (double)sum / SIZE;

    printf("학생별 점수\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%d번 학생: %d점\n", i + 1, score[i]);
    }

    printf("\n최대값: %d점\n", max);
    printf("최소값: %d점\n", min);
    printf("평균값: %.2f점\n", avg);

    return 0;
}