
#include <stdio.h>

void exerc5(void) {
    int player1;
    int player2;

    printf("가위: 1, 바위: 2, 보: 3\n");

    printf("player1 입력: ");
    scanf("%d", &player1);

    printf("player2 입력: ");
    scanf("%d", &player2);

    if (player1 == player2) {
        printf("tie\n");
    }
    else if (player1 == 1) {
        if (player2 == 2) {
            printf("player2 wins\n");
        }
        else {
            printf("player1 wins\n");
        }
    }
    else if (player1 == 2) {
        if (player2 == 3) {
            printf("player2 wins\n");
        }
        else {
            printf("player1 wins\n");
        }
    }
    else if (player1 == 3) {
        if (player2 == 1) {
            printf("player2 wins\n");
        }
        else {
            printf("player1 wins\n");
        }
    }
    else {
        printf("잘못된 입력입니다.\n");
    }

    return;
}

int main(void) {
    exerc5();
    return 0;
}
