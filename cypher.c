cypher.c
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// Caesar 암호 함수
void cypher(char* msg, int sft) {
    char ch;
    int i;

    for (i = 0; msg[i] != '\0'; ++i) {
        ch = msg[i];

        // 대문자 처리
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + sft + 26) % 26) + 'A';
            msg[i] = ch;
        }
        // 소문자 처리
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + sft + 26) % 26) + 'a';
            msg[i] = ch;
        }
        // 기타 문자는 변경하지 않음
    }
}

int main(void) {
    // 메시지 입력 받기
    char message[100];
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // 마지막 개행 문자 제거
    size_t len = strlen(message);
    if (len > 0 && message[len - 1] == '\n') {
        message[len - 1] = '\0';
    }

    // 시프트 값 입력 받기
    int shift;
    printf("Enter shift value: ");
    scanf("%d", &shift);

    // 암호화 수행
    cypher(message, shift);

    // 결과 출력
    printf("Encrypted! %s\n", message);
    return 0;
}
