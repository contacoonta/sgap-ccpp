/*
	함수 function
	- main 함수에 집중된 코드를 분산.
	- 함수로 만든 코드를 재사용.

	y	=	f	(	x	)
	int		main(		)
	
	1. 함수의 필요성 알아야..
	2. 함수를 정의..
	3. 함수를 선언..
*/

#include <stdio.h>

// 3. add 함수의 선언
int add(int a, int b);
int div(int a, int b);
void show(int k);

void main()
{
	int nA = 3, nB = 7;
	int nC = nA + nB;

	// 1. add 함수의 필요성.
	nC = add(nA, nB);
	//printf("nC = %d\n", nC);
	show(nC);

	// sub -

	// mul *

	// div /
	nC = div(nB, nA);
	//printf("nC = %d\n", nC);
	show(nC);
	// mod %
}

// 2. add 함수 정의.
int add(int a, int b)
{
	int c = a + b;
	return c;
}

int div(int a, int b)
{
	return a / b;
}

void show(int k)
{
	printf("---------show-----------\n");
	printf("결과 = %d\n", k);
}