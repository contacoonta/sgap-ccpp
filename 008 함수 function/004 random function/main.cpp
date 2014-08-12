/*
	random 함수
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomRange(int begin, int end);

void main()
{
	srand(time(NULL));
	/*int nr = rand();
	printf("랜덤 = %d\n", nr);
	nr = rand();
	printf("랜덤 = %d\n", nr);
	nr = rand();
	printf("랜덤 = %d\n", nr);*/


	// 1 ~ 6 까지 랜덤 숫자 발생하도록 만들어보기.
	// 10번을 굴려 보기.

	/*for (int i = 0; i < 10; i++)
	{
		printf("무작위 = %d\n", (rand() % 6) + 1);
	}*/

	// 함수 만들어 보기 ( 랜덤 범위 설정 )
	
	for (int i = 0; i < 10; i++)
	{
		printf("무작위 = %d\n", RandomRange(3, 10));
	}

}

int RandomRange(int begin, int end)
{
	int nresult = 0;
	int nrnd = rand();

	if ((nrnd % end) + begin > end)
	{
		nresult = RandomRange(begin, end);
	}

	return nresult;
}


/*
	과제 ]] 조작 주사위 만들기

	1	->	100 c			60 %	
	2	->	300 c			32 %
	3	->	5000 c			4 %
	4	->	20000 c			2 %
	5	->	1000000 c		1 %
	6	->	100000000 c		1 %
*/