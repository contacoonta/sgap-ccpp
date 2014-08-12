/*
	함수 포인터 ( Pointer Function )

	void (*pfunc)()
*/

#include <stdio.h>

void show(int);
int plus(int a, int b, void(*pshow)(int));

void main()
{
	// 함수 포인터 선언
	/*void (*pf)(int);
	pf = show;
	pf(1);*/

	// 두수의 합을 구하는 함수 포인터 만들기
	int(*pf2)(int, int, void(*pshow)(int));
	pf2 = plus;
	int c = pf2(4, 5, show);
}

void show(int a)
{
	printf("나를 찾으셨나요 ?\n");
	printf("%d\n", a);
}

int plus(int a, int b, void(*pshow)(int))
{
	pshow(a + b);
	return a + b;
}