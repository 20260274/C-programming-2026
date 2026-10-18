#include <stdio.h>

#define READ  0x01  
#define WRITE 0x02  
#define EXEC  0x04  

int main(void) {
    unsigned int permission = READ | WRITE;
    printf("권한 설정 결과: %d\n", permission);

    unsigned int result = permission & WRITE;
    printf("쓰기 권한 확인: %d\n", result);

    permission &= ~WRITE;
    printf("쓰기 권한 제거 후: %d\n", permission);

    permission |= EXEC;
    printf("실행 권한 추가 후: %d\n", permission);

    return 0;
}
