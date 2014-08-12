/*
	if ( 조건 )
	{
		(참) 식1
	}
	else
	{
		(거짓) 식2
	}

	조건	 ? 식1 : 식2
*/

/*
	숫자 입력 : ___

	입력한 숫자가		>0 "양수"	출력
					<0 "음수"	출력
					==0 "0"		출력
*/

#include <stdio.h>

void main()
{
	int num = 0;
	printf("숫자 입력 : ");
	scanf("%d", &num);

	if (num > 0)	// 0보다 크다.
	{
		printf("양수\n");
	}
	else			// 0보다 작거나, 0인 경우.
	{
		if (num == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("음수\n");
		}
	}
}