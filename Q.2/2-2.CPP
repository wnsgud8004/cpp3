#include <stdio.h>

int main() {
    int num;
    
    printf("1000 미만의 정수를 입력하세요: ");
    scanf("%d", &num);

    if (num < 0 || num >= 1000) {
        printf("잘못된 입력입니다. 0 이상 999 이하의 숫자를 입력하세요.\n");
        return 1; 
    }

    int hundred = num / 100;      // 백의 자리
    int ten = (num % 100) / 10;   // 십의 자리
    int one = num % 10;           // 일의 자리
    int first = 1;  // 첫 번째 출력인지 여부 (공백 조절용)

    if (num == 0) {
        printf("영");
    } else {
        if (hundred > 0) {
            if (hundred > 1) printf("%d", hundred);
            printf("백");
            first = 0;
        }
        if (ten > 0) {
            if (!first) printf(" ");  // 앞에 출력된 값이 있으면 공백 추가
            if (ten > 1) printf("%d", ten);
            printf("십");
            first = 0;
        }
        if (one > 0) {
            if (!first) printf(" ");  // 앞에 출력된 값이 있으면 공백 추가
            printf("%d", one);
        }
    }

    printf("\n"); 
    return 0;
}
