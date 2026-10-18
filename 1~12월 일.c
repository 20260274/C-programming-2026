
#include <stdio.h>

int main(void) {
    int month;

    printf("월을 입력하세요 : ");
    scanf("%d", &month);

    switch (month) {
        case 2:
            printf("2월은 28일까지 있습니다.\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d월은 30일까지 있습니다.\n", month);
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d월은 31일까지 있습니다.\n", month);
            break;

        default:
            printf("잘못된 월을 입력했습니다.\n");
            break;
    }

    return 0;
}
