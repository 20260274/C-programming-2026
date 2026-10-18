#include <stdio.h>


void exerc1(void)
{
    int n, r;
    double x = 1.0;
    long long count;

    printf("input n, r : ");

    if (scanf("%d%d", &n, &r) != 2)
    {
        printf("입력 오류입니다.\n");
        return;
    }

    if (n == 0 && r < 0)
    {
        printf("0의 음수 거듭제곱은 계산할 수 없습니다.\n");
        return;
    }

    count = (r < 0) ? -(long long)r : r;

    for (long long i = 0; i < count; i++)
        x *= n;

    if (r < 0)
        x = 1.0 / x;

    printf("%d의 %d승은 %.6f 입니다.\n", n, r, x);
}


void exerc2(void)
{
    int n;
    unsigned long long result = 1;

    printf("input n : ");

    if (scanf("%d", &n) != 1)
    {
        printf("입력 오류입니다.\n");
        return;
    }

    if (n < 0 || n > 20)
    {
        printf("0부터 20 사이의 정수를 입력하세요.\n");
        return;
    }

    for (int i = 1; i <= n; i++)
        result *= i;

    printf("%d factorial = %llu 입니다.\n", n, result);
}


void exerc3(void)
{
    int n;
    long long n_1 = 1, n_2 = 0, result = 0;

    printf("input n : ");

    if (scanf("%d", &n) != 1)
    {
        printf("입력 오류입니다.\n");
        return;
    }

    if (n < 0 || n > 92)
    {
        printf("0부터 92 사이의 정수를 입력하세요.\n");
        return;
    }

    if (n == 0)
        result = 0;
    else if (n == 1)
        result = 1;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
        }
    }

    printf("%d 번째 숫자는 %lld 입니다.\n", n, result);
}


void exerc4(void)
{
    long long sum = 0;
    double avg;
    int score;
    int i = 0;

    while (1)
    {
        printf("input score : ");

        if (scanf("%d", &score) != 1)
        {
            printf("입력 오류입니다.\n");
            return;
        }

        if (score == -1)
            break;

        sum += score;
        i++;
    }

    if (i == 0)
    {
        printf("입력된 점수가 없습니다.\n");
        return;
    }

    avg = sum / (double)i;

    printf("sum = %lld\n", sum);
    printf("avg = %.2f\n", avg);
}


void printStar(void)
{
    int line;

    printf("input line : ");

    if (scanf("%d", &line) != 1)
    {
        printf("입력 오류입니다.\n");
        return;
    }

    if (line < 1 || line > 100)
    {
        printf("1부터 100 사이의 정수를 입력하세요.\n");
        return;
    }

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line - i - 1; j++)
            printf(" ");

        int star_count = i * 2 + 1;

        for (int j = 0; j < star_count; j++)
            printf("*");

        printf("\n");
    }
}

int main(void)
{
    printStar();

    return 0;
}