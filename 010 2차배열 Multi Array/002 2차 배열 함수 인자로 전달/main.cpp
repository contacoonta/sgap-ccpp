/*
	
*/

#include <stdio.h>

void show1(int ArrayS[]);
void show2(int ArrayM[][4]);
void show3(int(*ArrayM)[4]);

void main()
{
	int ArrayS[] = { 7, 5, 4, 2 };

	// 배열을 출력하는 함수 만들기
	show1(ArrayS);

	// 2차배열의 열은 확정을 해줘야 행이 정해진다.
	int ArrayM[3][4] = {11, 12, 13, 14,
						21, 22, 23, 24,
						31, 32, 33, 34 };

	// 2차 배열을 출력하는 함수 만들기
	show2(ArrayM);
	show3(ArrayM);
}

void show1(int ArrayS[])
{
	printf("-------show1-------\n");

	for (int i = 0; i < 4; i++)
	{
		printf("%3d", ArrayS[i]);
	}

	printf("\n");
}

void show2(int ArrayM[][4])
{
	printf("-------show2-------\n");

	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3d", ArrayM[vert][horz]);
		}
		printf("\n");
	}
}

void show3(int (*ArrayM)[4])
{
	printf("-------show3-------\n");

	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3d", ArrayM[vert][horz]);
		}
		printf("\n");
	}
}