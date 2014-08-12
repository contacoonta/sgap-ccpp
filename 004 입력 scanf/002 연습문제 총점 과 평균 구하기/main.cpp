/*
	결과창 ]]

	국어 점수 입력 : __
	영어 점수 입력 : __
	수학 점수 입력 : __

	or

	국, 영, 수 입력 : __ __ __

	<<< 총점 및 평균 출력 >>>

	총점 = ???
	평균 = ??? ( 소수점 2자리 까지 출력 )
*/

#include <stdio.h>

int main()
{
	int nKor = 0, nEng = 0, nMat = 0;
	
	int nTot = 0;
	float fAvg = 0.0f;

	// 입력부분
	printf("국, 영, 수 : ");
	scanf("%d %d %d", &nKor, &nEng, &nMat);

	// 연산부분
	nTot = nKor + nEng + nMat;
	fAvg = (float)nTot / 3.0f;

	// 출력부분
	printf("<<< 결과 >>>\n");
	printf("총점 = %d\n", nTot);
	printf("평균 = %.2f\n", fAvg);
	
	return 0;
}