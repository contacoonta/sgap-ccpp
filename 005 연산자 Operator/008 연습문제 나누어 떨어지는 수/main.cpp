/*
	숫자를 입력 : ___ 

	7로 나눠서..

	나누어 떨어지면			= 몫			출력
	나누어 떨어지지 않으면	= 나머지		출력
*/

#include <stdio.h>

void main()
{
	int A = 0;
	int nRes = 0;
	printf("숫자 입력 : ");
	scanf("%d", &A );

	// 조건식			?	(참)식1		:	(거짓)식2
	nRes = (A % 7 == 0)	?	A / 7		:	A % 7;

	printf("결과 = %d\n", nRes);
}