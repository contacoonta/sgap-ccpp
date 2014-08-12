/*
	for 활용 ] 
	적금 ( 예치금 : 한번에 다 맡김 )

	연 이율 3.1%

	얼마 넣을지 ? __
	몇년간 맡길지 ? __

	1년째 : 이자 ___ , 총금액 ___
	2..
	n년째 : 이자 ___ , 총금액 ___
	
	공식 ]
	이자  = 원금 * 0.031;
	총금액 = 이자 + 이전 총금액;
*/

#include <stdio.h>

void main()
{
	int				nMoney = 0; // 맡긴 금액
	int				nYear = 0;	// 맡긴 기간
	const float		fInterestRate = 0.031f; // 연이율 (상수)
	int				nInterest = 0; // 이자
	
	printf("금액은 : ");
	scanf("%d", &nMoney);

	printf("몇 년 간 : ");
	scanf("%d", &nYear);

	for (int i = 0; i <= nYear; i++)
	{
		nInterest = nMoney * fInterestRate;
		nMoney = nMoney + nInterest;

		printf("%d 년 : 이자 = %d, 총금액 = %d\n", i, nInterest, nMoney);
	}

}