/*
	1차 배열 포인터
*/

#include <stdio.h>

void show(int p[], int nsz);

void main()
{
	int nums[5] = { 3, 5, 6, 7, 8 };

	// 배열의 시작주소
	int * pnums = &nums[0];
	
	//(nums+0) // 주소의 다음 주소를 가리킨다.

	// pnums를 활용해서 nums 의 두번째 값 출력
	for (int i = 0; i < 5; i++)
	{
		printf("pnums[%d] = %d\n", i, pnums[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("pnums + %d = %d\n", i, *(pnums + i) );
	}

	//
	int * pnums2 = (nums + 2);
	printf("pnums2 = %d\n", pnums2[-1]);

	//함수로 만들어 보기
	show(pnums, sizeof(nums) / sizeof(int));
}
//		   == *p
void show(int p[], int nsz)
{
	for (int i = 0; i < nsz; ++i )
	{
		printf("포인터 배열 p[%d] = %d\n", i, p[i]);
	}

	printf("\n");
}