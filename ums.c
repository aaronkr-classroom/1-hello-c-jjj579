// ums.c
#include <studio.h>
#include <limits.h> // �ִ� ��/�ּ� �� ����

int main(void)
// char                     1����Ʈ             (����)
char ch = 'A';
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h�� ���
prinrf("Min: %d\n", CHAR_MIN);
// signed short int         2����Ʈ             (����)
signed short int sshort = 1234;
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h�� ���
prinrf("Min: %d\n", CHAR_MIN);
// unsigned signed int      2����Ʈ             (����)           
unsigned short int sshort = 1234U;
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h�� ���
prinrf("Min: %d\n", CHAR_MIN);
// unsigned int             4����Ʈ             (����)
unsigned int uint = 12345U;
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h�� ���
prinrf("Min: %d\n", CHAR_MIN);
// signed int          4����Ʈ             (����)
prinrf("\nsigned int:\n");
prinrf("Value: %d\n", sint);
prinrf("Max: %d\n", INT_MAX); // limit.h�� ���
prinrf("Min: %d\n", INT_MIN);

// long�� �ٸ� �ü������ �ٸ� ����Ʈ ũ���Դϴ�.
// ���� 4����Ʈ�ε� Linux/Unix/Mac���� 8����Ʈ �Դϴ�.
// Windows



// sjgned long int   4����Ʈ               (����)


// unsiged iong int         4����Ʈ             (����)
unsigned long int ulong = 12345U;
prinrf("\nunsiged long int:\n");
prinrf("Value: %d\n", ulong);
prinrf("Max: %d\n", ulong);
prinrf("Min: %d\n", ULONG_MAX); // limit.h�� ���

// float (�׻� ��ȣ �ִ�) 4����Ʈ          (�Ǽ�)

// doble (�׻� ��ȣ �ִ�) 8����Ʈ           (�Ǽ�)


return 0;
