/*
	if ( 조건1 )
	{
		조건1 참이면 이곳을 실행
	}
	else if ( 조건2 )
	{
		조건2 참이면 이곳을 실행
	}
	else if ( 조건3 )
	{
		조건3 참이면 이곳을 실행
	}
	else
	{
		이도 저도 아니면 이곳을 실행
	}
*/

#include <stdio.h>

void main()
{
	/*	숫자 입력 : ___

		나머지 연산 ( %4 )

		0 이면 -> Human
		1 이면 -> Orc
		2 이면 -> NightElf
		3 이면 -> Undead

		예) 당신은 나이트엘프 를 선택 했습니다.
	*/

	int nRace = 0;
	printf("숫자 입력 : ");
	scanf("%d", &nRace);

	nRace %= 4;

	if (nRace == 0)
	{
		printf("당신은 휴먼 \n");
	}
	else if (nRace == 1)
	{
		printf("당신은 오크 \n");
	}
	else if (nRace == 2)
	{
		printf("당신은 나이트엘프 \n");
	}
	else //if (nRace == 3) // 3
	{
		printf("당신은 언데드 \n");
	}

}