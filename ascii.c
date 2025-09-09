// ascii.c
#include <stdio.h>

int main(void) {
    // ASCII 값으로 문자 출력
    char x = 72; // 'H'
    char y = 105; // 'i'
    char z = 33; // '!'

    printf("ASCII %d + %d + %d = %c%c%c\n", x, y, z, x, y, z);

    // 문자 'A'와 그 다음 문자 출력
    char a = 'A';
    char b = a + 1;

    printf("%c + 1 = %c\n", a, b);

    // ASCII 값 85부터 105까지 문자 출력
    printf("ASCII 값 85부터 105까지의 문자:\n");
    for (int i = 85; i <= 105; i++) {
        printf("ASCII:: %d = %c\n", i, i);
    }

    return 0;
}
