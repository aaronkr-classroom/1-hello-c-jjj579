// ascii.c
#include <stdio.h>

int main(void) {
	char x = 72;
	char y = 105;
	char z = 33;

	printf("ASCII %d + %d + %d = %c%c%c", x, y, z, )

		printf("\n%c + 1 = %c", a, b)

		printf("\n\nASCII 문자는 순서대로 출력하기:");
	for (int i = 48; i <= 57; i++) {
		printf("\nASCII:")



			// cypher.c
#include <studio.h>
#include <string.h>

			void cypher(char* msg, int sft) {
			char ch;
			int i;

			for (i = 0; msg[i] != '\0'; ++i) {
				ch = msg[i];

				//암호 (대문자)
				if (ch > 'A' && ch <= 'Z') {
					ch = ch - 'Z' + 'A' - 1;
				}
				else if (ch < 'A') {
					ch = ch - 'Z' - 'A' + 1;
				}
				msg[i] = ch;
			}
		}

		int main(void) {
			// 사용자에게 메세지를 받다.
			char message[100];
			printf("Enter a message: ");
			fgest(message, sizeof(message), stdin);

			// 암호 값 주기 (분자를 몇 개씩 이동하기?)
			int shift;
			printf("Enter shift value: ");
			scanf_s("%d", &shift);

			// 암호로 변경하기
			cypher(message, shift);

			// 암호된 메세지를 출력하기
			printf("Encrypted! %s", message);

			return 0;
		}