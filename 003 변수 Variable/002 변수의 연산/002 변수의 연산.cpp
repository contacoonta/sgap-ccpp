/*
	+ - * / %
*/

#include <stdio.h>

void main()
{
	int n1 = 111;
	int n2 = 32;

	// 변수간의 + 연산
	int n3 = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, n3);

	// - 연산	해보기
	// *

	// /	나누기 연산	(float) 형변환 Casting
	float n4 = (float)n1 / (float)n2;							// c방식 casting
	printf("%.2f / %.2f = %.2f \n", float(n1), float(n2), n4);	// c++방식 casting

	// %	나머지 연산
	int n5 = n1 % n2;
	printf("%d %% %d = %d \n", n1, n2, n5);

}