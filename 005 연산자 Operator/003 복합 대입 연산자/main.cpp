/*
	복합 대입 연산자
	+= -= *= /= %=
*/

#include <stdio.h>

void main()
{
	int num1 = 3;

	//num1 = num1 + 2;
	num1 += 2;
	printf("num1 = %d\n", num1);

	num1 -= -1 + num1;
	printf("num1 = %d\n", num1);

	num1 *= 3 * (num1 + 2);
	printf("num1 = %d\n", num1);

	num1 %= 13 - num1;
	printf("num1 = %d\n", num1);
}