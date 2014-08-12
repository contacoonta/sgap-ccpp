/*
	반복문 - while

	3 요소 : 시작값 , 종료조건 , 증감값


	1. 시작값
	while( 2.종료조건 )
	{
		내용...

		3.증감값
	}
*/

#include <stdio.h>

void main()
{
	// 1 부터 5 까지 순차적으로 증가하는 값을 출력

	/*printf("%d\n", 1);
	printf("%d\n", 2);
	printf("%d\n", 3);
	printf("%d\n", 4);
	printf("%d\n", 5);*/

	//// 1.시작값
	//int i = 1;
	//// 2.종료조건
	//while (i <= 5)	// while 안이 true 면 무한반복, false 면 탈출
	//{
	//	printf("%d\n", i);
	//	//3.증가값 ( 1씩 증가 )
	//	i++;
	//}

	//// 3부터 16까지 출력 ( +2 씩 증가 )
	//int j = 3;
	//while (j <= 16)
	//{
	//	printf("j = %d\n", j);
	//	j += 2;
	//}

	//// 20 부터 1까지 출력 ( -3 씩 감소 )
	//int k = 20;
	//while (k >= 1)
	//{
	//	printf("k = %d\n", k);

	//	k -= 3;
	//}


	// 1부터 10까지 더한 값 ? ( 누적된 값 )
	//1 + 2 + 3 + 4 ... + 10
	int n = 1;
	int nsum = 0;
	while (n <= 10)
	{
		nsum += n;
		printf("n = %3d , %3d\n", n, nsum);

		n++;
	}

}