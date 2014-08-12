/*
	2차 배열 포인터
*/

#include <stdio.h>

void show(int(*pt2)[4], int row, int col);
void show2(int(*pt2)[4]);

void main()
{
	int table[3][4] = { 2, 4, 6, 8,
						1, 3, 5, 7,
						9, 7, 5, 3 };
	// 첫 번째 행의 시작 주소
	int * pt = table[0];

	printf("%d\n", *pt);
	// 첫행 두번째 열 값 출력
	printf("%d\n", *(pt+1));
	printf("%d\n", pt[7]);


	//2차 배열 2차 포인터 형태로 받기
	int (*pt2)[4] = table; //((table+0)+0);
	// pt2 로 (2, 1) 의 값 출력
	printf("%d,%d = %d\n", 2, 1, pt2[2][1]);
	printf("%d,%d = %d\n", 2, 1, *(*(pt2+2)+1));


	// 함수로 만들기
	show(pt2, 2, 3);
	// for 문 전체 출력
	show2(pt2);
}

void show(int(*pt2)[4], int row, int col)
{
	printf("---------show---------\n");
	printf("%d\n", pt2[row][col]);
}

void show2(int(*pt2)[4])
{
	printf("---------show2---------\n");
	for (int vert = 0; vert < 3; ++vert)
	{
		for (int horz = 0; horz < 4; ++horz)
		{
			printf("%3d", pt2[vert][horz]);
		}
		printf("\n");
	}
}

