/*
	2차 ( 다차원 ) 배열 : Multi Array

	행 : 세로 : Row		: Vertical
	열 : 가로 : Column	: Horizontal

	int Array[행][열]

	- 1차 배열과 같이 연속된 주소형태
*/

#include <stdio.h>

void main()
{
	int table[3][4] = { { 0, 11, 12, 13 },
						{ 4, 5, 6, 7 },
						{ 8, 9, 10, 11 } };
	
	//2차 배열 -> 값 출력
	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3d ", table[vert][horz]);
		}
		printf("\n");
	}

	//2차 배열 -> 주소 출력
	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3p ", &(table[vert][horz]));
		}
		printf("\n");
	}

	// for 문 하나만 써서 , 배열 모든 값 출력
	// - 1차 , 2차 배열 모두 .. 메모리가 순차적으로 증가
	for (int i = 0; i < 12; i++)
	{
		printf(" 값 = %d\n", *(*table + i));
	}

}