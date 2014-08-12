/*
	[ c++0x -> c++ 11 ]

	range based for
	- 배열을 위한 반복문
*/

#include <stdio.h>

void show(int nums[]);

void main()
{
	int nums[] = { 7, -2, 5, 13, 27 };

	/*for (int x : nums)
	{
		printf("%d\n", x);
	}*/

	// range based for 로 출력하기
	show(nums);
}

void show(int nums[])
{
	for (int x : nums)
	{
		printf("%d\n", x);
	}
}