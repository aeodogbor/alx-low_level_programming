#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("n: %d\n", n);

	char n = 'a';
	printf("Enter a char: ");
	scanf("%c", &n);
	printf("n: %c \n", n);

	float n = 0;
	printf("Enger a float: ");
	scanf("%f", &n);
	print("n: %f \n", n);

	double n = 0;
	printf("Enter a double: ");
	scanf("%lf", &n);
	printf("n: %lf\n", n);

	int n1, n2, n3;
	n1 = n2 = n3 = 0;
	printf("Enter n1 n2 n3: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("sum: %d\n", n1 + n2 + n3);

	char str[] = "This is my string!";
	printf("str: %s\n", str);

	char buffer[40];
	printf("Enter a string: ");
	scanf("%s", buffer);
	printf("string entered: %s\n", buffer);

	return (0);
}
