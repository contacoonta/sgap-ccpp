/*
	함수 ( 인자 - Parameter )

	- 값 으로 전달
	- 주소 로 전달
*/

#include <stdio.h>

//3 함수 선언
void show(int nums[]);

void main()
{
	int nums[] = {7,8,4,5,6};

	// 1 함수의 필요성.
	show(nums);
}

//2 함수 디자인 ( 정의 )
void show(int nums[])
{
	//과제1 ] 5 -> count 형태로 바꾸기
	for (int i = 0; i < 5; i++)
	{
		printf("nums = %d\n", nums[i]);
	}
}

/*
	과제2 ] AddArray( 배열, 3 );
*/