/*
	증감 연산자
	- 단항 연산자

	++ --
*/

#include <stdio.h>

void main()
{
	int num1 = 0;

	--num1;
	printf("num1 = %d\n", num1);
	/*num1 += 1;
	num1 = num1 + 1;*/

	++num1;
	printf("num1 = %d\n", num1++);
	printf("num1 = %d\n", num1);

	num1 -= ++num1 + num1--;
	printf("num1 = %d\n", num1);
}