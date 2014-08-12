/*
	조건 연산자 ( 삼항 연산자 )

	조건  ?  (참) 식1 :  (거짓) 식2
*/

#include <stdio.h>

void main()
{
	int A = 7, B = 3;
	int nResult = 0;

	nResult = A < B ? A : B;
	printf("result = %d\n", nResult);

	/*
		scanf 를 활용.
		조건 연산자를 활용.
		
		두 수를 입력 : __ __
		두 수중 큰 수는 = __
	*/

	printf("두 수를 입력 : ");
	scanf("%d %d", &A, &B);
	
	nResult = A > B ? A : B;
	printf("result = %d\n", nResult);
}