#include <studio.h>

int main(void) {
	int age = 20;
	char grade = 'A';
	char name[] = "Aaron";
	
	printf("Hello World!~");
	printf("I'm %d years old.", age);
	printf("I want a %c grade.", grade);
	printf("My name is %s.", name);
	return 0;
};
#include <stdio.h>
#include <limits.h>

int main(void) {
    // char 타입
    char ch = 'A';
    printf("char :\n");
    printf("Value: %c\n", ch);
    printf("Max: %d\n", CHAR_MAX);
    printf("Min: %d\n", CHAR_MIN);

    // signed short int
    signed short int sshort = 1234;
    printf("\nsigned short int:\n");
    printf("Value: %d\n", sshort);
    printf("Max: %d\n", SHRT_MAX);
    printf("Min: %d\n", SHRT_MIN);

    // unsigned short int
    unsigned short int ushort = 1234U;
    printf("\nunsigned short int:\n");
    printf("Value: %u\n", ushort);
    printf("Max: %u\n", USHRT_MAX);

    // signed int
    signed int sint = 1234;
    printf("\nsigned int:\n");
    printf("Value: %d\n", sint);
    printf("Max: %d\n", INT_MAX);
    printf("Min: %d\n", INT_MIN);

    // unsigned int
    unsigned int uint = 12345U;
    printf("\nunsigned int:\n");
    printf("Value: %u\n", uint);
    printf("Max: %u\n", UINT_MAX);

    // signed long int
    signed long int slong = 123456789L;
    printf("\nsigned long int:\n");
    printf("Value: %ld\n", slong);
    printf("Max: %ld\n", LONG_MAX);
    printf("Min: %ld\n", LONG_MIN);

    // unsigned long int
    unsigned long int ulong = 12345UL;
    printf("\nunsigned long int:\n");
    printf("Value: %lu\n", ulong);
    printf("Max: %lu\n", ULONG_MAX);

    // float
    float f = 123.456f;
    printf("\nfloat:\n");
    printf("Value: %.3f\n", f);

    // double
    double d = 123456.7890123;
    printf("\ndouble:\n");
    printf("Value: %.9f\n", d);

    return 0;
}
