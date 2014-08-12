/*
	산술 연산자
	+ plus , add
	- minus, subtract
	* multiply
	/ divide	몫
	% modular	나머지
*/

#include <stdio.h>

void main()
{
	int k1 = 15;
	int k2 = 7;

	// + 
	printf(" + = %d\n", k1 + k2);

	// -
	// *
	// /	
	printf(" / = %d\n", k1 / k2);
	// %
	printf(" %% = %d\n", k1 % k2 );

	//나머지 연산에 대해 알아보기
	printf(" 10 %% 12 = %d\n", 10 % 12);
	printf(" 11 %% 12 = %d\n", 11 % 12);
	printf(" 12 %% 12 = %d\n", 12 % 12);
	printf(" 13 %% 12 = %d\n", 13 % 12);
	
}