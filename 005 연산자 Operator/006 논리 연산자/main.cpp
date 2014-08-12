/*
	논리 연산자
	A && B  양쪽 모두 참이면 참
	A || B  양쪽중 하나만 참이면 참
	!		현재 상태를 부정
	
*/

#include <stdio.h>

int main()
{
	int A = 4;
	bool b = false;	// 0 은 거짓
	b = true;		// 0 이 아니면 참

	b = A && 0 < 3;
	printf("결과 = %d\n", b);

	b = A || false;
	printf("결과 = %d\n", b);

	b = ((float)A - 3.999f) || false;
	printf("결과 = %d\n", b);

	b = !b;
	printf("결과 = %d\n", b);
}