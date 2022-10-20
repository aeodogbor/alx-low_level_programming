#include <stdio.h>

// %[flags][width][.precision]specifier

int main(void)
{
	printf("Hello, World!\n");
	printf("\t Another line of text!\n");
	printf("double quote: \" \n");
	printf("\\ \n");
	
	int x = 5;
	printf("int: %d \n", x );
	printf("int: %d, %d, %d \n", x, x+1, x+2 );

	char c = q;
	printf("c: %c \n", c );
	
	double y = 4.56;
	printf("y: %lf \n", y );

	float z = 2.5;
	printf("z: %f \n", z );

	char str[] = "A string output!\n";
	printf("str: %s", str );

	printf("|||%-10d|||\n", 5 );

	printf("|||%8.2f|||\n", y);

	return (0);
}
