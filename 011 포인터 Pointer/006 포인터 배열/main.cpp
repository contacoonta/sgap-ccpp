/*
	포인터 배열

	int (*p)[3];	//2차 배열 포인터
	(int*) p[3];	//    포인터 배열
*/

#include <stdio.h>

void show(int* p[]);
void show1(int* (*p));

void main()
{
	int alpha = 1, beta = 2, charlie = 3;

	int* p[3] = {};

	p[0] = &alpha;
	p[1] = &beta;
	p[2] = &charlie;

	for (int* x : p)
	{
		printf("%d\n", *x);
	}

	//함수화 하기
	show(p);	// []
	show1(p);	// *
}

void show(int* p[])
{
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n", *p[i]);
	}
}

void show1(int* (*p))
{
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n", **(p+i));
	}
}