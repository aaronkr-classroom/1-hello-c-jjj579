// ums.c
#include <studio.h>
#include <limits.h> // 최대 값/최소 값 볼때

int main(void)
// char                     1바이트             (문자)
char ch = 'A';
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h의 상수
prinrf("Min: %d\n", CHAR_MIN);
// signed short int         2바이트             (정수)
signed short int sshort = 1234;
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h의 상수
prinrf("Min: %d\n", CHAR_MIN);
// unsigned signed int      2바이트             (정수)           
unsigned short int sshort = 1234U;
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h의 상수
prinrf("Min: %d\n", CHAR_MIN);
// unsigned int             4바이트             (정수)
unsigned int uint = 12345U;
prinrf("char:\n");
prinrf("Value: %c\n", ch);
prinrf("Max: %d\n", CHAR_MAX); // limit.h의 상수
prinrf("Min: %d\n", CHAR_MIN);
// signed int          4바이트             (정수)
prinrf("\nsigned int:\n");
prinrf("Value: %d\n", sint);
prinrf("Max: %d\n", INT_MAX); // limit.h의 상수
prinrf("Min: %d\n", INT_MIN);

// long은 다른 운영체제에서 다른 바이트 크기입니다.
// 보통 4바이트인데 Linux/Unix/Mac에서 8바이트 입니다.
// Windows



// sjgned long int   4바이트               (정수)


// unsiged iong int         4바이트             (정수)
unsigned long int ulong = 12345U;
prinrf("\nunsiged long int:\n");
prinrf("Value: %d\n", ulong);
prinrf("Max: %d\n", ulong);
prinrf("Min: %d\n", ULONG_MAX); // limit.h의 상수

// float (항상 부호 있다) 4바이트          (실수)

// doble (항상 부호 있다) 8바이트           (실수)


return 0;
