// ascii.c
#include <stdio.h>

int main(void) {
	char x = 72;
	char y = 105;
	char z = 33;

	printf("ASCII %d + %d + %d = %c%c%c", x, y, z, )

		printf("\n%c + 1 = %c", a, b)

		printf("\n\nASCII ���ڴ� ������� ����ϱ�:");
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

				//��ȣ (�빮��)
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
			// ����ڿ��� �޼����� �޴�.
			char message[100];
			printf("Enter a message: ");
			fgest(message, sizeof(message), stdin);

			// ��ȣ �� �ֱ� (���ڸ� �� ���� �̵��ϱ�?)
			int shift;
			printf("Enter shift value: ");
			scanf_s("%d", &shift);

			// ��ȣ�� �����ϱ�
			cypher(message, shift);

			// ��ȣ�� �޼����� ����ϱ�
			printf("Encrypted! %s", message);

			return 0;
		}