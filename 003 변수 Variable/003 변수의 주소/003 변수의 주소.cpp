/*
	변수의 주소
	- int 4byte 할당	-> 메모리상에 존재
	- 주소연산자		-> & Ampersand
*/

#include <stdio.h>

void main()
{
	// 변수를 선언하면 , 동시에 초기화
	char cA = 0;

	cA = 16;

	printf("cA = %d\n", cA);
	printf("cA 의 주소 = %p\n", &cA);
}