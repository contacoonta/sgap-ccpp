/*
	반복문 - for

	for ( 시작값 ; 종료조건 ; 증감값 )
	{
		작업 ...
	}
*/

#include <stdio.h>

void main()
{
	// for  -> 20 ~ 1 까지 -2 씩 감소  출력
	for (int i = 20; i >= 1; i -= 2)
	{
		printf("i = %d\n", i);
	}


	int n = 0;
	for (;n <= 10;)
	{
		printf("n = %d\n", n);

		n++;
	}
}