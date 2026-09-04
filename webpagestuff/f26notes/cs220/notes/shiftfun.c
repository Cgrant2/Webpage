#include <stdio.h>
#include <unistd.h>

/*
	Small program showing left shift overflows in different
	integer sizes
	Made to coincide with the 8/31/2026 lecture
*/

int main() {
	unsigned char c2 = 1<<15;
	unsigned char c3 = 1<<16;
	signed char c4 = 1<<15;
	unsigned short s2 = 1<<15;
	unsigned short s3 = 1<<16;
	signed short s4 = 1<<15;
	unsigned int i2 = 1<<15;
	unsigned int i3 = 1<<16;
	signed int i4 = 1<<15;

	printf("Unsigned char 1 << 15 = %d\n", c2);
	printf("Unsigned char 1 << 16 = %d\n", c3);
	printf("Signed char 1 << 15 = %d\n", c4);
	printf("Unsigned short 1 << 15 = %d\n", s2);
	printf("Unsigned short 1 << 16 = %d\n", s3);
	printf("Signed short 1 << 15 = %d\n", s4);
	printf("Unsigned int 1 << 15 = %d\n", i2);
	printf("Unsigned int 1 << 16 = %d\n", i3);
	printf("Signed int 1 << 15 = %d\n", i4);
	return(0);
}
