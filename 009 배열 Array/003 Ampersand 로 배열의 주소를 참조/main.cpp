/*
	Ampersand ( & ) 연산자로 배열의 주소 확인
*/

#include <stdio.h>

void main()
{
	int arr[4] = {};

	arr[1] = 3;
	arr[3] = 5;


	//1 주소 확인 - &arr[0]
	for (int i = 0; i < 4; i++)
	{
		printf("&arr[%d] 의 주소 = %p\n", i , &arr[i]);
	}

	printf("------------------------\n");

	//2 주소 확인 - (arr + 0) (arr + 1) ...
	for (int i = 0; i < 4; i++)
	{
		printf("arr + %d 의 주소 = %p\n", i , arr + i);
	}
}