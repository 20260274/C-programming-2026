#include <stdio.h>

int isleafyear(int year)
{
    int isleaf = 0;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                isleaf = 1;
        }
        else
        {
            isleaf = 1;
        }
    }

    return isleaf;
}

void exerc(void)
{
    int month;
    int days;

    printf("월 입력(1~12) : ");

    if (scanf("%d", &month) != 1)
    {
        printf("입력 오류입니다.\n");
        return;
    }

    if (month >= 1 && month <= 12)
    {
        switch (month)
        {
            case 2:
            {
                int year;

                printf("input year : ");

                if (scanf("%d", &year) != 1 || year < 1)
                {
                    printf("올바른 연도를 입력하세요.\n");
                    return;
                }

                if (isleafyear(year) == 1)
                    days = 29;
                else
                    days = 28;

                break;
            }

            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;

            default:
                days = 31;
                break;
        }

        printf("%d월은 %d일까지 있습니다.\n", month, days);
    }
    else
    {
        printf("1부터 12사이의 값을 입력하세요.\n");
    }
}

int main(void)
{
    exerc();

    return 0;
}
