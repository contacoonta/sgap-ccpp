/*

	랜덤 범위 5 ~ 15 까지 나오도록 ..

	arrray 에 채우기

	>>>>

	int array[4];

	RandomArray( array );

	ShowArray( array );
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int array[]);
void ShowArray(int array[]);
void ReverseArray(int* array, int* revArray);

void main()
{
	int num = 4;
	int array[4] = {};
	
	RandomArray(array);
	ShowArray(array);

	//
	printf("--------rev----------\n");
	int RevArray[4] = {};

	// 기존 array 값들을 RevArray 에 역순으로 넣기
	ReverseArray(array, RevArray);
	ShowArray(RevArray);

	// 오름차순으로 정렬해서 IncArray 에 넣기
	int AscArray[4] = {};
	AscendingArray(array, AscArray);
	ShowArray(AscArray);
}

void RandomArray(int array[])
{
	srand(time(NULL));

	for (int i = 0; i < 4; i++)
	{
		array[i] = (rand() % (15 - 5)) + 5;
	}
}

void ShowArray(int array[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("array[%d] = %d\n" , i, array[i]);
	}
}

void ReverseArray(int* array, int* revArray)
{
	for (int f = 0 , i = 3; f < 4, i >= 0; f++, i--)
	{
		revArray[i] = array[f];
	}
}


/*
	과제 오름차순으로 정렬하기
*/
void AscendingArray(int * arr, int * ascArr)
{

}