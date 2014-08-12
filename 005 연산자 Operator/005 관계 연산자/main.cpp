/*
	관계 연산자
	> < >= <=
	A == B 양쪽 값이 같은면 참, 다르면 거짓
	A != B 양쪽 값이 다르면 참, 같으면 거짓
*/

#include <stdio.h>

int main()
{
	int A = 0;

	// bool 데이터 타입은, 1byte
	// true  == 1
	// false == 0
	bool b = false; // 0

	b = A < 3;
	printf("결과 = %d\n", b);

	b = 0 > A--;
	printf("결과 = %d\n", b);

	b = (3 == A + 3);
	printf("결과 = %d\n", b);
}