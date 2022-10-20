#include <stdio.h>

//
// or operator
//
// x		y		X || Y
// True		True		True
// True		False		True
// False	True		True
// False	False		False
//
// and operator
//
// X		Y		X && Y
// True		False		True
// True		False		False
// False	True		False
// False	False		False
//
// not operator
//
// X		!X
// True		False
// False	True
//
int main(void)
{
	int year = 2018;
	int price = 21000;

	if (year >= 2019 && price <= 20000) 
	{
		printf("Ok!\n");
	}
	else if (year >= 2019 || price <= 20000)
	{
		printf("Still Ok!\n");
	}
	else if (!(year <= 2019)) printf("Good Year!\n");
	else 
	{
		printf("Not Ok!\n");
	}
	
	return (0);
}
